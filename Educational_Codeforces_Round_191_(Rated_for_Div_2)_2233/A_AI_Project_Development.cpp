#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    int withoutAI=INT_MAX;
    int withAI=ceil((double)n/(x+y));
    if(n-x*z>0)
    withoutAI=z+ceil((n-x*z)/(double)(x+10*y));

    cout<<min(withAI,withoutAI)<<endl;

    }
    return 0;
}