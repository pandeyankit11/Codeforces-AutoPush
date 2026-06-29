#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n;
 cin>>n;
 bool check{0};
 for(int i=1;i<=46;i++){
    if(n==pow(2,i)){
        check=1;
        cout<<"NO"<<endl;
        break;
    }
 }
if(!check)
cout<<"YES"<<endl;
}
    return 0;
}