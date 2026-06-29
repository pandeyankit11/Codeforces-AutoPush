#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n;
 cin>>n;
 if(n%2!=0){
    cout<<-1<<endl;
    continue;
 }
 bool check{0};
 vector<long long>a;
 long long max_num,min_num;
for(long long i=0;i<=n/4;i++){
    if((2*i+n)%6==0){
        check=1;
        min_num=(2*i+n)/6;
        
        break;
    }
}
for(long long i=n/4;i>=0;i--){
    if((2*i+n)%6==0){
        check=1;
        max_num=(2*i+n)/6;
        
        break;
    }
}
if(check==1)
cout<<min_num<<" "<<max_num<<endl;
else{
    cout<<-1<<endl;
}
}


    return 0;
}