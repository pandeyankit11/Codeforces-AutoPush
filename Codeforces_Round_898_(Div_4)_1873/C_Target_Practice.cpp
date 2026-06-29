#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

     vector<vector<int>> vec{
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
while(t--){
    int scr{0};
    vector<vector<char>>vec_c(10,vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>vec_c[i][j];
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(vec_c[i][j]!='.')
            scr+=vec[i][j];
        }
    }
    cout<<scr<<endl;
}
return 0;
}