#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define vi vector<int>

const int N = 2e5 + 5;  // Adjust size as needed
ll seg[4 * N];          // Segment tree array

// ---------------------- Build ----------------------
void build(const vi &a, int v, int tl, int tr) {
    if (tl == tr)
        seg[v] = a[tl];
    else {
        int tm = (tl + tr) / 2;
        build(a, 2*v, tl, tm);
        build(a, 2*v+1, tm+1, tr);
        seg[v] = seg[2*v] + seg[2*v+1];
    }
}

// ---------------------- Range Query ----------------------
ll query(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr)
        return seg[v];
    int tm = (tl + tr) / 2;
    return query(2*v, tl, tm, l, min(r, tm))
         + query(2*v+1, tm+1, tr, max(l, tm+1), r);
}

// ---------------------- Point Update ----------------------
void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr)
        seg[v] = new_val;
    else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(2*v, tl, tm, pos, new_val);
        else
            update(2*v+1, tm+1, tr, pos, new_val);
        seg[v] = seg[2*v] + seg[2*v+1];
    }
}

// ---------------------- Main ----------------------
int main() {
    FAST_IO;

    int n, q;
    cin >> n >> q;
    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    build(a, 1, 0, n-1);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int idx, val;
            cin >> idx >> val;
            update(1, 0, n-1, idx, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << query(1, 0, n-1, l, r-1) << "\n";
        }
    }

    return 0;
}
