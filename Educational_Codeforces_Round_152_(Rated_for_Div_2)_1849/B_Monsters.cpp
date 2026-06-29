#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n,k;
 cin>>n>>k;
 vector<long long>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 bool check{0};
 for(int i=0;i<n;i++){
    if(a[i]>=k)
    check=1;
 }
 if( check==0){
    vector<pair<long long, int>> v;
for(int i = 0; i < n; i++) {
    if(a[i]!=0)
    v.push_back({a[i], i + 1});
}
sort(v.begin(), v.end(), [](auto &x, auto &y) {
    if(x.first != y.first) return x.first > y.first; 
    return x.second < y.second; 
});

for(auto x:v)
cout<<x.second<<" ";
cout<<endl;
 }
 else{
vector<long long>divisible;
long long count{0};
 for(int i=0;i<n;i++){
 if(a[i]%k==0){
 divisible.push_back(i+1);
 a[i]=0;
 count++;
 }
 else{
   a[i]%= k;
 
 
 }
 }
 for(int i=0;i<divisible.size();i++)
 cout<<divisible[i]<<" ";
 vector<pair<long long, int>> v;
for(int i = 0; i < n; i++) {
    if(a[i]!=0)
    v.push_back({a[i], i + 1});
}
sort(v.begin(), v.end(), [](auto &x, auto &y) {
    if(x.first != y.first) return x.first > y.first; 
    return x.second < y.second; 
});

for(auto x:v)
cout<<x.second<<" ";


    cout<<endl;
}
}

    return 0;
}