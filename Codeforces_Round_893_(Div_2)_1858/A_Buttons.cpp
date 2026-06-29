#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long a,b,c,ascr{0},kscr{0};
 
 cin>>a>>b>>c;
 if(c%2==0){
    ascr+=c/2;
    kscr+=c/2;
 }
 else{
    ascr=(c+1)/2;
    kscr=(c-1)/2;
 }
 ascr+=a;
 kscr+=b;

 if(ascr>kscr)
 cout<<"First"<<endl;
 else{
    cout<<"Second"<<endl;
 }
 
 
}
    return 0;
}