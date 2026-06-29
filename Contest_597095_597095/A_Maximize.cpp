#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, g;
    cin >> n >> m >> g;

    vector<int> p(n), q(m);
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> q[i];
    }

    
    int minP = *min_element(p.begin(), p.end());
    
    int maxQ = *max_element(q.begin(), q.end());


    if(maxQ <= minP) {
        
        cout << g << "\n";
    } else {
        
        long long crystals = g / minP; 
        long long finalGold = g + crystals * ((long long)maxQ - minP);
        cout << finalGold << "\n";
    }

    return 0;
}
