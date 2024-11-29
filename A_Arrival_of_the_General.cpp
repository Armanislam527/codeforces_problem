#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateSwaps(int n, vector<int> &heights) {
    int maxIdx = max_element(heights.begin(), heights.end()) - heights.begin();
    int minIdx = min_element(heights.rbegin(), heights.rend()) - heights.rbegin();
    minIdx = n - 1 - minIdx;
    // this line is for verify commit
    int swaps = maxIdx + (n - 1 - minIdx);
    if (maxIdx > minIdx) {
        swaps--;
    }
    return swaps;
}

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    cout << calculateSwaps(n, heights) << endl;
    return 0;
}
