#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int onecount = 0,x,n;
    cin >>  n;
    for (int i = 0; i < n; i++)
    {
        cin >>  x;
        for(int j = 0; j < x; j++)
        {
           int arr[x];
           cin >> arr[j];
           if(arr[j] == 1)
           {
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
            onecount++;
           }
        }
        cout<<x-onecount+(onecount+1)/2<<endl;
    }
    return 0;
}