#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<int>vec(n);
 for(int i=0;i<n;i++){
    cin>>vec[i];
 }

 if(!is_sorted(vec.begin(),vec.end())){
    cout<<0<<endl;
    continue;
 }
 int a{vec[0]};
 if(count(vec.begin(),vec.end(),a)==n){
    cout<<1<<endl;
    continue;
 }
 int sd{vec[1]-vec[0]};
 for(int i=1;i<n;i++){
    if(sd>(vec[i]-vec[i-1])){
        sd=vec[i]-vec[i-1];
    }
 }

 if(sd%2==0)
 cout<<(int)(ceil((double)(sd-1)/2)+1)<<endl;
 else{
    cout<<((sd-1)/2)+1<<endl;
 }

}
    return 0;
}