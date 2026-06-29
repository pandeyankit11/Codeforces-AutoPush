#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    int n;
    cin>>n;
    
    vector<int>ans;
    if(n%2==0){
     
        vector<int>inc(n);
        vector<int>dec=inc;
        
        for(int i=0;i<n;i++){
            inc[i]=i+1;
            dec[i]=n-i;
        }
        
    ans.insert(ans.end(),inc.begin(),inc.end());
    ans.insert(ans.end(),dec.begin(),dec.end());
    ans.insert(ans.end(),dec.begin(),dec.end());
    ans.insert(ans.end(),inc.begin(),inc.end());

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    continue;


    }
    vector<int>l(n/2);
    vector<int>m(1);
    vector<int>r(n/2);
    for(int i=0;i<n;i++){
        if(i<n/2)
        l[i]=i+1;

        if(i==n/2)
        m[0]=i+1;

        if(i>n/2)
        r[i-n/2-1]=i+1;
    }

    ans.insert(ans.end(),l.begin(),l.end());
    ans.insert(ans.end(),m.begin(),m.end());
    ans.insert(ans.end(),r.begin(),r.end());
    ans.insert(ans.end(),r.begin(),r.end());
    ans.insert(ans.end(),l.begin(),l.end());
    ans.insert(ans.end(),m.begin(),m.end());
    ans.insert(ans.end(),r.begin(),r.end());
    ans.insert(ans.end(),l.begin(),l.end());
    ans.insert(ans.end(),m.begin(),m.end());
    ans.insert(ans.end(),l.begin(),l.end());
    ans.insert(ans.end(),m.begin(),m.end());
    ans.insert(ans.end(),r.begin(),r.end());

     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}
    return 0;
}