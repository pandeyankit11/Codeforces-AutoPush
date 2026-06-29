#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    auto max_num = max_element(vec.begin(),vec.end());
    int max=*max_num;
    cout<<vec.size()*max<<endl;

    }
    return 0;
}