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
 int count1{0};
 bool check1{0};
 
 for(int i=n-2;i>=0;i--){
    while(a[i]>=a[i+1]){
        count1++;
        a[i]/=2;
        if(a[i+1]==0 && a[i]==0){
        check1=1;
        cout<<-1<<endl;
        break;
        }
    }
    if(check1)
    break;
    
    
 }
 if(check1)
 continue;
 
 cout<<count1<<endl;
 


}
    return 0;
}