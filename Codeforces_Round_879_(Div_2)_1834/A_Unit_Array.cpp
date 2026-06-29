#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<int>vec(n);
 for(int i=0;i<n;i++){
    cin>>vec[i];
 }
 int t1=count(vec.begin(),vec.end(),1);
 int t2=count(vec.begin(),vec.end(),-1);
int count{0};
 if(t1>=t2){
 if(t2%2==0)
 cout<<count<<endl;
 else{
 cout<<count+1<<endl;
 }
 }
 else{
    int t3=ceil((double)(t2-t1)/2);
    if((t2-t3)%2==0)
    cout<<t3<<endl;
    else{
        cout<<t3+1<<endl;
    }
 }


}
    return 0;
}