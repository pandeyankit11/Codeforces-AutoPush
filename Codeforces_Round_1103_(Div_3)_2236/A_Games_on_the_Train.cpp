#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    int n;
    cin>>n;
    vector<int>h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    auto max_num=max_element(h.begin(),h.end());
    auto min_num=min_element(h.begin(),h.end());

    cout<< *max_num + 1 -*min_num<<endl;

    }
    return 0;
}