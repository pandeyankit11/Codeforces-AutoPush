#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long a,b,c,d;
 cin>>a>>b>>c>>d;
 if((a<c && (a+d-b-c)<0) || b>d){
    cout<<-1<<endl;
    continue;
 }
 long long xd=abs(a-c);
long long yd;
 if(c>a)
 yd=abs(d-(b+c-a));
 else{
    yd=d-b;
 }
 cout<<xd+(2*yd)<<endl;

}
    return 0;
}