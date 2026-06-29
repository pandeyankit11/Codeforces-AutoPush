#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        

        int count_zero{0};
        int count_one{0};
        int cost{0};
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                count_zero++;
            else
            {
                count_one++;
            }
        }
        
        
       for(int i=0;i<s.size();i++){
        if(s[i]=='0' && count_one>0){
            count_one--;
            
            cost++;
        }
        else if(s[i]=='1' && count_zero>0){
            count_zero--;
            
            cost++;
        }
        else{
            break;

        }
       }
       
       cout<<s.size()-cost<<endl;

    }
    return 0;
}