#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        string ans;
        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }

        while (m.count('b'))
        {
            ans += "b";
            m['b']--;
            if (m['b'] == 0)
                m.erase('b');
        }
        while (m.count('u'))
        {
            ans += "u";
            m['u']--;
            if (m['u'] == 0)
                m.erase('u');
        }
        while (m.count('g'))
        {
            ans += "g";
            m['g']--;
            if (m['g'] == 0)
                m.erase('g');
        }
        while (m.count('y'))
        {
            ans += "y";
            m['y']--;
            if (m['y'] == 0)
                m.erase('y');
        }
        while (m.count('r'))
        {
            ans += "r";
            m['r']--;
            if (m['r'] == 0)
                m.erase('r');
        }
        while (m.count('b'))
        {
            ans += "t";
            m['t']--;
            if (m['t'] == 0)
                m.erase('t');
        }

        for (auto it = m.begin(); it != m.end(); it++)
        {
            while (m[it->first] != 0)
            {
                ans += it->first;
                m[it->first]--;
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}