#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long x;
 cin>>x;
 long long count{0};
 bool check{0};
 if(x==1){
    cout<<3<<endl;
    continue;
 }
 else{
    vector<long long>vec{1,1,0};
    while(check!=1){
        if(((vec[0]*2)+1)>=x){
        vec[2]=x;
        count+=3;
        break;
        }
        
            vec[2]=((vec[0]*2)+1);
            count++;
            vec[1]=vec[2];
            count++;
        if(((vec[1]*2)+1)>=x){
        vec[0]=x;
        count+=3;
        break;
        }
        vec[0]=((vec[1]*2)+1);
        count++;
        vec[1]=vec[0];
        count++;
    }
    cout<<count+2<<endl;
 }

}
    return 0;
}