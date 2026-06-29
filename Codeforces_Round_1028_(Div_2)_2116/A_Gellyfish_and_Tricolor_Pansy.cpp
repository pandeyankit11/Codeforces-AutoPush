#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long a,b,c,d;
 cin>>a>>b>>c>>d;
 long long gmain,fmain;
 if(a<=c)
 gmain=a;
 else{
    gmain=c;
 }
 if(b<=d)
 fmain=b;
 else{
    fmain=d;
 }
 if(fmain<=gmain)
 cout<<"Gellyfish"<<endl;
 else{
    cout<<"Flower"<<endl;
 }


}
    return 0;
}