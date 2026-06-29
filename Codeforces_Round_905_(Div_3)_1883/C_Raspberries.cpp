#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;

while(t--){
 cin>>n>>k;
 vector<int>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 bool check{0};
for(int i=0;i<n;i++){
    if(a[i]%k==0){
        cout<<0<<endl;
        check=1;
        break;
    }


}
if(check)continue;
if(k==4){
int count_one{0};
int count_two{0};
for(int i=0;i<n;i++){
    if(k-(a[i]%k)==1)
    count_one++;
    if(k-(a[i]%k)==2)
    count_two++;
}
if(count_one>0 && count_two<2){
    cout<<1<<endl;
    continue;
}

if(count_two>1){
    cout<<0<<endl;
    continue;
}
if(count_two==0){
    cout<<2<<endl;
    continue;
}
if(count_two==1){
    cout<<1<<endl;
    continue;
}
}
else{
 int ans=k-(a[0]%k);
 for(int i=1;i<n;i++){
    if(k-(a[i]%k)<ans)
    ans=k-(a[i]%k);
 }
 cout<<ans<<endl;

}
}
    return 0;
}