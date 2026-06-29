#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define MODULAR 998244353

long long fast_exp(long long b, int e, int mod) {
    long long ans = 1;
    b %= mod;
    while(e) {
        if(e & 1) ans = (ans * b) % mod;
        b = (b * b) % mod;
        e >>= 1;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cntA; cin >> cntA;
    vector<int> aPrimes(cntA);
    for(int idx=0; idx<cntA; ++idx) cin >> aPrimes[idx];
    vector<int> aExponents(cntA);
    for(int idx=0; idx<cntA; ++idx) cin >> aExponents[idx];
    
    map<int, int> primeExponentMap;
    for(int i=0; i<cntA; ++i) 
        primeExponentMap[aPrimes[i]] = aExponents[i];
    
    int cntB; cin >> cntB;
    vector<int> bPrimes(cntB);
    for(int idx=0; idx<cntB; ++idx) cin >> bPrimes[idx];
    vector<int> bExponents(cntB);
    for(int idx=0; idx<cntB; ++idx) cin >> bExponents[idx];
    
    long long total = 1;
    for(int j=0; j<cntB; ++j) {
        int prime = bPrimes[j];
        auto it = primeExponentMap.find(prime);
        if(it == primeExponentMap.end()) {
            cout << "0\n";
            return 0;
        }
        int aExp = it->second;
        int bExp = bExponents[j];
        if(bExp > aExp) {
            cout << "0\n";
            return 0;
        }
        if(aExp != bExp) 
            total = (total << 1) % MODULAR;
    }
    
    int remainingPrimes = cntA - cntB;
    long long multiplier = fast_exp(2, remainingPrimes, MODULAR);
    long long result = (total * multiplier) % MODULAR;
    cout << result << '\n';
}