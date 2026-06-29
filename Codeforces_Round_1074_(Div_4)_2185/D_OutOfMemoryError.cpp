#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<int> original_vec(n);
        vector<int> current_vec(n);
        vector<int> timestamp(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> original_vec[i];
            current_vec[i] = original_vec[i];
        }

        int global_time = 1;

        for (int i = 0; i < m; i++) {
            int idx, val;
            cin >> idx >> val;
            idx--; 

            long long active_val;
            if (timestamp[idx] == global_time) {
                active_val = current_vec[idx];
            } else {
                active_val = original_vec[idx];
            }

            if (active_val + val > h) {
                global_time++; 
            } else {
                current_vec[idx] = active_val + val;
                timestamp[idx] = global_time;
            }
        }

        for (int i = 0; i < n; i++) {
            if (timestamp[i] == global_time) {
                cout << current_vec[i] << " ";
            } else {
                cout << original_vec[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}