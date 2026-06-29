#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    map<int, int> counts;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        counts[val]++;
    }

    // 1. Compress the array based on Odd/Even frequencies
    vector<int> comp;
    for(auto const& [val, count] : counts) {
        if(count % 2 != 0) {
            comp.push_back(val);       // Odd -> 1 copy
        } else {
            comp.push_back(val);
            comp.push_back(val);       // Even -> 2 copies
        }
    }

    // 2. The map already sorted the keys, so comp is naturally sorted. 
    // Now just check if ANY adjacent difference is <= k
    bool alice_wins = false;
    for(int i = 1; i < comp.size(); i++){
        if(comp[i] - comp[i-1] <= k){
            alice_wins = true;
            break;
        }
    }

    // 3. Print the absolute optimal result
    if(alice_wins){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    // Fast I/O is critical for large test cases
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}