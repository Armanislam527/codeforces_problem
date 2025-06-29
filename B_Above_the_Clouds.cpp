#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,m,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>m;
        n=m-1;
        char a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        s="No";
        for(int i=0;i<m-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    s="Yes";
                    break;
                }
                }
                if(i==0)
                {
                    n++;
                }
            }
            cout<<s<<endl;
        }
        return 0;
    }
