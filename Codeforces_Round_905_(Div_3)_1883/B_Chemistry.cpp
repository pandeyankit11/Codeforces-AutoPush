#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;

while(t--){
 cin>>n>>k;
 string s;
 cin>>s;
vector<int>freq_of_char(26,0);
for(int i=0;i<n;i++){
    freq_of_char[s[i]-'a']++;
}

long long odd_freq{0};
for(int i=0;i<26;i++){
    if(freq_of_char[i]%2!=0)
    odd_freq++;
}

if(k>=odd_freq-1)
cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}
}
    return 0;
}