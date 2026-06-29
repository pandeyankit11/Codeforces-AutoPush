#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    int n;
    cin>>n;
    vector<long long>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int k= (vec[1]-vec[0]>vec[0]) ? vec[1]-vec[0] : vec[0];
    cout<<k<<endl;
    }
    return 0;
}