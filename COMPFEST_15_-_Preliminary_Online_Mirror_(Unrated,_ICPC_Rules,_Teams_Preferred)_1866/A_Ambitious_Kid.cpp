#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,min;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        vec[i]=abs(vec[i]);
    }
    auto min_num=min_element(vec.begin(),vec.end());
    min=*min_num;
    cout<<min<<endl;

    return 0;
}