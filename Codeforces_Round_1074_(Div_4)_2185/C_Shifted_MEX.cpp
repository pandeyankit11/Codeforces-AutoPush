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
    if(vec.size()==1)
    cout<<1<<endl;

    else{
    sort(vec.begin(),vec.end());
    int curr{1};
    int max_num{1};

    for(int i=0;i<vec.size()-1;i++){
        while(i<vec.size()-1 && vec[i+1]==vec[i]){
            i++;
        }
        if(i >= vec.size() - 1) break;
        if(vec[i+1]-vec[i]==1)
        curr++;
        else
        curr=1;

        max_num=max(max_num,curr);
    }
    cout<<max_num<<endl;
    }
}
    return 0;
}