#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n;
 cin>>n;
 long long copyn1=n;
 long long copyn2=n;
 int power_two{0};
 int power_three{0};
 while(copyn1%2==0){
    power_two++;
    copyn1/=2;
 }
 
 while(copyn2%3==0){
    power_three++;
    copyn2/=3;
 }

 if(power_two>power_three || (pow(2,power_two)*pow(3,power_three)!=n)){
    cout<<-1<<endl;
    continue;
 }
 else{
    int op{0};
    int power_six;
    op=power_three-power_two;

    n=n*pow(2,op);
    for(int i=0;i<=18;i++){
        if(n==pow(6,i)){
        power_six=i;
        
        break;
        }
    }
    op+=power_six;
    cout<<op<<endl;
 }
}
    return 0;
}