#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    bool isValid=true;
    for(int i=0;i<n;i++){
        if(s[i]=='1' ){
            if(i+k>n-1){
            isValid=false;
            break;
            }
        
        if(s[i+k]=='1'){
            s[i+k]='0';
        }
        else{
            s[i+k]='1';
        }
        }
    }

    if(isValid){
    cout<<"YES"<<endl;
    continue;
    }

    cout<<"NO"<<endl;
    
    

    }
    return 0;
}