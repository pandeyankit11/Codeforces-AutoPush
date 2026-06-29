#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long a,b,xk,yk,xq,yq;
 cin>>a>>b>>xk>>yk>>xq>>yq;
 

vector<pair<long long, long long>> king = {
    {xk-a, yk-b}, {xk-a, yk+b}, {xk+a, yk-b}, {xk+a, yk+b},
    {xk-b, yk-a}, {xk-b, yk+a}, {xk+b, yk-a}, {xk+b, yk+a}
};

vector<pair<long long, long long>> queen = {
    {xq-a, yq-b}, {xq-a, yq+b}, {xq+a, yq-b}, {xq+a, yq+b},
    {xq-b, yq-a}, {xq-b, yq+a}, {xq+b, yq-a}, {xq+b, yq+a}
};
set<pair<long long,long long>>s;

for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        if((king[i]==queen[j])){
            s.insert(king[i]);
        }
    }
}

cout<<s.size()<<endl;

}
    return 0;
}