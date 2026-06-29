#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,x;
    cin>>t;

while(t--){
 cin>>n>>k>>x;
 if(x!=1){
    cout<<"YES"<<endl<<n<<endl;
    
    for(int i=0;i<n;i++)
    cout<<1<<" ";
    cout<<endl;
    continue;
 }

 if(k==1)
 cout<<"NO"<<endl;
 else if(k==2){
    if(n%2!=0)
    cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        int t=n/k;
        cout<<t<<endl;
        for(int i=0;i<t;i++)
        cout<<2<<" ";
        cout<<endl;
    }
}
else{
    cout<<"YES"<<endl;
    int t1=n/2;
    int t2=n/3;
    int t3=(n-3)/2;
    if(n%2==0){
        cout<<t1<<endl;
        for(int i=0;i<t1;i++)
        cout<<2<<" ";
        cout<<endl;
        continue;
    }
    if(n%3==0){
        cout<<t2<<endl;
        for(int i=0;i<t2;i++)
        cout<<3<<" ";
        cout<<endl;
        continue;
    }
    cout<<t3+1<<endl;
    cout<<3<<" ";
    for(int i=0;i<t3;i++)
    cout<<2<<" ";
    cout<<endl;
}
}
    return 0;
}