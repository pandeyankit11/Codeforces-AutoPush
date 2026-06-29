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
 

 vector<int>diff;
 for(int i = 0; i < n; i++) {
    if(a[i] != i + 1) {
        diff.push_back(abs(a[i] - (i + 1)));
    }
}

 
 int g{0};
 for(int i=0;i<diff.size();i++){
     g=__gcd(g,diff[i]);
 }
 cout<<g<<endl;
}
    return 0;
}