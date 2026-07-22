#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int odd_mm=0;
    int even_mm=0;

    for(int i=0;i<n;i++){
        if(i%2==0 && arr[i]%2!=0)
        even_mm++;
        else if(i%2!=0 && arr[i]%2==0)
        odd_mm++;
    }
    if(odd_mm==even_mm)
    cout<<odd_mm<<endl;
    else
    cout<<-1<<endl;


    }
    return 0;
}