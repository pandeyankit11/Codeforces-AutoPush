#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

long long count_magical_prefixes(int n, const vector<long long>& arr) {
    long long prefix_sum = 0;
    long long magical_count = 0;
    unordered_set<long long> seen;
    seen.reserve(n);  // Reserve space to avoid rehashing

    for (auto x : arr) {
        prefix_sum += x;
        seen.insert(x);

        // Check if prefix_sum is even and prefix_sum/2 is in 'seen'
        if ((prefix_sum & 1LL) == 0) {  // faster even check
            long long half = prefix_sum / 2;
            if (seen.find(half) != seen.end()) {
                magical_count++;
            }
        }
    }
    return magical_count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << count_magical_prefixes(n, arr) << "\n";
    }
    return 0;
}
