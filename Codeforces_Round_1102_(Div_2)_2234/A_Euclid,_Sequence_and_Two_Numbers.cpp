#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    int n;
    cin>>n;
    bool exist=true;
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(b.rbegin(),b.rend());

    if(n==2){
        cout<<b[0]<<" "<<b[1]<<endl;
        continue;
    }

    for(int i=0;i<=n-3;i++){
        if(b[i+2]!=(b[i]%b[i+1])){
            cout<<-1<<endl;
            exist=false;
            break;
        }
    }
    if(!exist)
    continue;

    cout<<b[0]<<" "<<b[1]<<endl;


    }
    return 0;
}