#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
   
    int k = 0;
    for(int i = 0; i < n - 1; i++){
        if(vec[i] > vec[i+1]){
            k = max(k, vec[i] - vec[i+1]);
        }
    }
    
   
    long long current_max = -2e18; 
    
    for(int i = 0; i < n; i++){
        long long val = vec[i];
        
        
        if(val < current_max){
            val += k;
        }
        
        
        if(val < current_max){
            cout << "NO\n";
            return;
        }
        
        
        current_max = val;
    }
    
    cout << "YES\n";
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}