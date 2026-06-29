#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s;
bool check{0};
 for(int i=1;i<n-1;i++){
    int main_count;
    main_count=count(s.begin(),s.end(),s[i]);
    if(main_count>1){
        check=1;
        break;
    }
 }

 if(check)
 cout<<"Yes"<<endl;
 else{
    cout<<"No"<<endl;
 }
}
    return 0;
}