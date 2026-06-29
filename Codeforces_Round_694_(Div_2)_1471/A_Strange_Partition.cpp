#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n,x;
 cin>>n>>x;

 vector<long long>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
long long sum=accumulate(a.begin(),a.end(),0LL);
 long long minimum,maximaum{0};
minimum=ceil((double)sum/x);
for(int i=0;i<n;i++){
    maximaum+=ceil((double)a[i]/x);
}

cout<<minimum<<" "<<maximaum<<endl;
}
    return 0;
}