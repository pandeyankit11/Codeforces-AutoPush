#include <iostream>

using namespace std;

int main() {
    int t,n,m,l,r;
    cin>>t;
    
    while(t--){
        cin>>n>>m>>l>>r;
        int lf=0;
    int rf=0;
    int i=0;
    while(i!=m){
        if(rf<r){
            rf++;
            i++;
        }
        else{
            lf--;
            i++;
        }
    }
    
   cout<<lf<<" "<<rf<<endl;
    }
     return 0;
}

