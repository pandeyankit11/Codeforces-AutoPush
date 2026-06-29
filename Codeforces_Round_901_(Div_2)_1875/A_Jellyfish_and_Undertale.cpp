#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 long long a,b;
 cin>>a>>b>>n;
 vector<long long>x(n);
 for(int i=0;i<n;i++){
    cin>>x[i];
 }
 if(a==1 && b==1){
    cout<<1<<endl;
    continue;
 }
 long long count{0};
 int flag{0};
 for(int i=0;i<n;i++){
    if(x[i]<a){
    count+=x[i];
    flag++;
    }
 }
 long long d=n-flag;

 cout<<(count+b-1)+a+(d-1)*(a-1)<<endl;


}
    return 0;
}