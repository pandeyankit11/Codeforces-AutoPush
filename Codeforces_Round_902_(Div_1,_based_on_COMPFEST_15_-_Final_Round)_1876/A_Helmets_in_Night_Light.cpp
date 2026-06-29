#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
    long long n,p;
 cin>>n>>p;
 vector<int>a(n);
 vector<int>b(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 for(int i=0;i<n;i++){
    cin>>b[i];
 }


multimap<int,int>mp;
for(int i=0;i<n;i++){
    mp.insert({b[i],a[i]});
}

int count{1};
long long cost{p};

for (auto it = mp.begin(); it != mp.end(); ++it) {
    int task_cost = it->first;
    int time_units = it->second;

    while (time_units > 0 && count < n && task_cost<=p) {
        cost += task_cost;
        count++;
        time_units--;
    }
    if (count == n) break;
    if(task_cost>p){
        int diff=n-count;
        cost+=diff*p;
        break;
    }
    
}

cout<<cost<<endl;

}
    return 0;
}