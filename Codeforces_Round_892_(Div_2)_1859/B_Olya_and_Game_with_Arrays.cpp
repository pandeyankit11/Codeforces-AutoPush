#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
long long n;
cin>>n;
long long ans{0};
vector<long long>vec_min1;
vector<long long>vec_min2;
while(n--){
    long long m;
    cin>>m;
    vector<long long>vec(m);
    for(int i=0;i<m;i++){
        cin>>vec[i];
    }
    auto min_num1=min_element(vec.begin(),vec.end());
    vec_min1.push_back(*min_num1);
    vec.erase(min_num1);
    auto min_num2=min_element(vec.begin(),vec.end());
    vec_min2.push_back(*min_num2);

}
auto min_num1=min_element(vec_min1.begin(),vec_min1.end());
auto min_num2=min_element(vec_min2.begin(),vec_min2.end());

ans=(*min_num1)+(accumulate(vec_min2.begin(),vec_min2.end(),0LL)-(*min_num2));
cout<<ans<<endl;

}
    return 0;
}