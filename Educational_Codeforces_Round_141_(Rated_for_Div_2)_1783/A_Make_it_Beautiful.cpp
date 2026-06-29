#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 
 int count1{0};
 int count2=0;
 bool check{0};

for(int i=0;i<n-1;i++){
    count1+=a[i];
    if(count1==a[i+1]){
        int diff;
        for(int j=i+1;j<n;j++){
            if(a[i]!=a[j]){
            count1=count1-a[i]+a[j];
            swap(a[i],a[j]);
            break;
            }
        }
    }
}
for(int i=0;i<n-1;i++){
    count2+=a[i];
    if(count2==a[i+1]){
        
        check=1;
        cout<<"NO"<<endl;
        break;
    }
}
if(check==0){
    cout<<"YES"<<endl;
    for(auto ch:a)
    cout<<ch<<" ";
    cout<<endl;
}

}
    return 0;
}