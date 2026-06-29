#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 string s;
 cin>>s;
 int int_len{0};
 if(s[0]=='0'){
    int i{0};
    while(s[i]=='0'){
        int_len++;
        i++;

    }
    if(int_len==s.length()){
    cout<<0<<" "<<0<<endl;
    continue;
    }
}
s.erase(0,int_len);
stringstream ss(s);
int num;
ss>>num;
int square_root=sqrt(num);
if(square_root*square_root==num){
    cout<<square_root<<" "<<0<<endl;
}
else{
    cout<<-1<<endl;
}
}
    return 0;
}