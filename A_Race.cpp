#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);    
#define endl '\n'
#define mod 1000000007
#define inf 1e18    
/*************  ✨ Windsurf Command ⭐  *************/
    /**
     * This is the main entry point of the program.
     * It reads the number of test cases from the standard input, and for each test case,
     * it reads three integers a, b and c and checks if a XOR b is equal to b XOR c.
     * If it is, it prints "YES" to the standard output, otherwise it prints "NO".
     */
/*******  3a5e0c78-01c0-4688-a565-a0e25e67c144  *******/

int main() {
    fast_io;
    
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        if (abs(a - b) >= abs(c - b))     {
            cout << "YES" << endl;
        }
        else if (abs(a - c) >= abs(b - c)) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}