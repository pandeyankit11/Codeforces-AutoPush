#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    
    while(t--){
        cin>>n;
        int l1{0},l2{0};
        bool check{0};
        deque<int>deq1(n);
        deque<int>deq2(n);
        for(int i=0;i<n;i++){
            cin>>deq1[i];
        }
    deq2=deq1;
   sort(deq1.begin(),deq1.end());
   sort(deq2.begin(),deq2.end());
   if((deq1[0]+deq1[n-1])%2==0)
    check=1;
   if(n==2 && check==0){
       cout<<1<<endl;
       continue;
    }
    while(check==0){
        deq1.pop_front();
        if((deq1[0]+deq1[deq1.size()-1])%2==0)
        check=1;
        l1++;
    }
    check=0;
    if((deq2[0]+deq2[n-1])%2==0)
        check=1;
    while(check==0){
        deq2.pop_back();
        if((deq2[0]+deq2[deq2.size()-1])%2==0)
        check=1;
   l2++;
 }
 
 if(l2>=l1)
 cout<<l1<<endl;
 else{
    cout<<l2<<endl;
 }
}
    return 0;
}