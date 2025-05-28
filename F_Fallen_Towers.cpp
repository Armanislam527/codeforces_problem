
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll ans = 0;
    vector<ll> final(n);
    
    // Try all possible orderings of knocking down towers
    for(int i = 0; i < n; i++) {
        vector<ll> temp = a;
        vector<bool> used(n, false);
        vector<ll> result = temp;
        
        // Knock down towers in different orders
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(!used[k]) {
                    vector<ll> curr = result;
                    used[k] = true;
                    
                    // Add 1 to next temp[k] towers
                    for(int l = k+1; l < min(n, k+1+(int)curr[k]); l++) {
                        curr[l]++;
                    }
                    curr[k] = 0;
                    
                    // Check if array is non-decreasing
                    bool valid = true;
                    for(int l = 0; l < n-1; l++) {
                        if(curr[l] > curr[l+1]) {
                            valid = false;
                            break;
                        }
                    }
                    
                    if(valid) {
                        result = curr;
                        break;
                    }
                    used[k] = false;
                }
            }
        }
        
        // Calculate MEX
        set<ll> s;
        for(int j = 0; j < n; j++) {
            if(result[j] <= n) s.insert(result[j]);
        }
        ll mex = 0;
        while(s.count(mex)) mex++;
        ans = max(ans, mex);
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}