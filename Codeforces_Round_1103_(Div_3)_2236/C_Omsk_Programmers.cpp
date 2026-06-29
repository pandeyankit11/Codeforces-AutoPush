#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, x;
        cin >> a >> b >> x;

      
        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        
        if (x == 1) {
            cout << abs(a - b) << "\n";
            continue;
        }

        vector<int> A_anchors, B_anchors;

       
        int currA = a;
        while (currA > 0) {
            A_anchors.push_back(currA);
            currA /= x;
        }
        A_anchors.push_back(0); 

        
        int currB = b;
        while (currB > 0) {
            B_anchors.push_back(currB);
            currB /= x;
        }
        B_anchors.push_back(0); 

        int min_ops = INT_MAX;

    
        for (int i = 0; i < A_anchors.size(); i++) {
            for (int j = 0; j < B_anchors.size(); j++) {
                
              
                int current_ops = i + j + abs(A_anchors[i] - B_anchors[j]);
                min_ops = min(min_ops, current_ops);
                
            }
        }

        cout << min_ops << "\n";
    }
    return 0;
}