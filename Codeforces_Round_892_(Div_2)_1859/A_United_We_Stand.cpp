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
 int c1{a[0]};
if(count(a.begin(),a.end(),c1)==n){
    cout<<-1<<endl;
    continue;
}


    int lar;
    auto max_num=max_element(a.begin(),a.end());
    lar=*max_num;
    vector<int>c;
    vector<int>b;
    for(auto ch: a){
        if(ch==lar)
        c.push_back(ch);
        else{
        b.push_back(ch);
        }
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(auto ch:b)
    cout<<ch<<" ";
    cout<<endl;
    for(auto ch: c)
    cout<<ch<<" ";
    cout<<endl;




}
    return 0;
}