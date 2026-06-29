#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 string s;
 cin>>s;
int zero_count{0};
int one_count{0};
for(int i=0;i<s.size();i++){
    if(s[i]=='0')
    zero_count++;
    else{
        one_count++;
    }
}

int main_count;
if(zero_count<=one_count)
main_count=zero_count;
else{
    main_count=one_count;
}

if(main_count%2==0)
cout<<"NET"<<endl;
else{
    cout<<"DA"<<endl;
}
}
    return 0;
}