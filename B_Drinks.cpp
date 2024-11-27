#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of drinks

    vector<int> percentages(n); // Store the percentages in a vector
    double total = 0.0;

    // Read all percentages and calculate the total
    for (int i = 0; i < n; i++) {
        cin >> percentages[i];
        total += percentages[i];
    }

    // Calculate the average percentage
    double result = total / n;

    // Print the result with high precision
    cout << fixed << setprecision(12) << result << endl;

    return 0;
}
