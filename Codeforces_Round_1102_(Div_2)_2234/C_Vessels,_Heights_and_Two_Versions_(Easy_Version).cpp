#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++) {
        vector<long long> cw(n);
        vector<long long> ccw(n);

        // 1. Walk Clockwise: The limit is the highest wall seen so far
        long long max_wall = 0;
        for (int step = 1; step < n; step++) {
            int curr = (i + step) % n;
            int wall_behind = (curr - 1 + n) % n;
            
            max_wall = max(max_wall, h[wall_behind]);
            cw[curr] = max_wall;
        }

        // 2. Walk Counter-Clockwise: The limit is the highest wall seen so far
        max_wall = 0;
        for (int step = 1; step < n; step++) {
            int curr = (i - step + n) % n;
            int wall_ahead = curr; // The wall in the CCW direction
            
            max_wall = max(max_wall, h[wall_ahead]);
            ccw[curr] = max_wall;
        }

        // 3. The actual water is the minimum of the two maximums
        long long total_water = 0;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                total_water += min(cw[j], ccw[j]);
            }
        }
        
        cout << total_water <<" ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}