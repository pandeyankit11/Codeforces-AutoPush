#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    long long n;
    cin>>n;

    long long a,b;

    if(n%12<=9 || n%12==11){
        a=n%12;
        b=n-a;
    }
    if(n%12==10){
        a=22;
        b=n-a;
    }

    if(a>=0 && b>=0){
        cout<<a<<" "<<b<<endl;
        continue;
    }
    cout<<-1<<endl;

    }
    return 0;
}