#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<long long>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
if(n==1){
    cout<<0<<endl;
    continue;
}
int con_even{0};
int con_odd(0);

for(int i=0;i<n-1;i++){
    if(a[i]%2!=0 && a[i+1]%2!=0){
        con_odd++;
    }
    if(a[i]%2==0 && a[i+1]%2==0){
        con_even++;
    }
}
cout<<con_even+con_odd<<endl;

}
    return 0;
}