#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n;
 cin>>n;
int op1{0};

long long n1=n;

while(n1%10!=5 && n1!=0){
    
    op1++;
    n1=n1/10;
}

n1=n1/10;
while((n1%10!=2 && n1%10!=7) && n1!=0){
    
    op1++;
    n1=n1/10;
}

int op2=0;
long long n2=n;

while(n2%10!=0 && n2!=0){
op2++;
n2/=10;
}
n2/=10;
while((n2%10!=0 && n2%10!=5) && n2!=0){

    op2++;
    n2/=10;
}

if(op1>=op2)
cout<<op2<<endl;
else{
    cout<<op1<<endl;
}


}
    return 0;
}