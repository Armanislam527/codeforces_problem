#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {9, 2, 8, 9, 4, 6};
    int i, j, index;
    for (i = 0; i < 6; i++)
    {
        index = i;
        for (j = i + 1; j < 6; j++)
        {

            if (a[j] < a[index])
            {
                index = j;
            }
        }
        if (index != i)
        {
            swap(a[i], a[index]);
        }
    }
    for (i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}