    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;
        cin>>t;
     
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int cnt=count(s.begin(),s.end(),'B');
        vector<int>querys(q);
        for(int i=0;i<q;i++){
            cin>>querys[i];
        }
        vector<int>ans;
        for(int i=0;i<q;i++){
            int a=querys[i];
        if(cnt==0){
        ans.push_back(a);
        continue;
        }
            int count{0};
            for(int j=0;j<n;j++){
                if(s[j]=='A'){
                    a-=1;
                    count++;
                    if(a==0) break;
                }
                else{
                    a=(a/2);
                    count++;
                    if(a==0) break;
                }
                if(j==n-1){
                    j=-1;
                }
            }
            ans.push_back(count);
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
     
    }
    }
        return 0;
    }