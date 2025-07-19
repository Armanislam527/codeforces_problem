#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    vector<int> digit;
    cin >> t;
    int b = t;
    while (t--)
    {
        int n;
        cin >> n;
        while (n)
        {
            int d = n % 10;
            digit.push_back(d);
            n /= 10;
        }
        if (t == b - 2)
        {
            cout << digit.front() << endl;
        }
        else
        {
            cout << digit.back() << endl;
        }
    }
    return 0;
}
