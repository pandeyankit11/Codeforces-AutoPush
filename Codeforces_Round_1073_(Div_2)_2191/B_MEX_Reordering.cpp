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

    sort(vec.begin(),vec.end());

    int left_min;
    if(vec[0]==0)
    left_min=1;
    else
    left_min=0;
    int right_min;

    for(int i=0;i<=n;i++){
        if(find(vec.begin()+1,vec.end(),i)==vec.end()){
        right_min=i;
        break;
        }
    }
    if(left_min!=right_min)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


    }
    return 0;
}