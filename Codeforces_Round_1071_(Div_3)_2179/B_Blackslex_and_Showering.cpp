#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    int n,s{0};
    cin>>n;
    vector<int>vec(n);
    
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n-1;i++){
        s+=abs(vec[i]-vec[i+1]);
    }
    int best=0;
    for(int i=1;i<n-1;i++){
     int gain = abs(vec[i-1]-vec[i])+abs(vec[i]-vec[i+1])-abs(vec[i-1]-vec[i+1]);
     best=max(gain,best);
    }

    best = max({best,abs(vec[1]-vec[0]),abs(vec[n-1]-vec[n-2])});
    cout<<s-best<<endl;

}
    return 0;

}