#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
while(t--){
    long long R,X,D,n,count{0};
    cin>>R>>X>>D>>n;
    string s;
    cin>>s;
     
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            R-=D;
            count++;
        }
        if(s[i]=='2'){
            if(R<X){
                R-=D;
                count++;
            }
        }
    }
    cout<<count<<endl;
    

    }
    return 0;
}