#include <bits/stdc++.h>
using namespace std;

// ---------------------------- FAST I/O ----------------------------
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)

// ---------------------------- TYPEDEFS ----------------------------
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;

// ---------------------------- MACROS ------------------------------
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)

// ---------------------------- DEBUGGING ---------------------------
#ifdef LOCAL
#define debug(x) cerr << #x << " = "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(ll x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
template <class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }

// ---------------------------- RNG SETUP ---------------------------
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// ---------------------------- MAIN FUNCTION -----------------------
int main() {
    FAST_IO;

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases

    while (t--) {
        // your code here
    }

    return 0;
}
