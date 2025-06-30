#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--)
    { 
        int max=0;
    
        cin>>n>>m;
        int a[n][m];
        int rowcount[n],colcount[m];
        for(int i=0;i<n;i++)
        {rowcount[i]=0;}
        for(int i=0;i<m;i++)
        {colcount[i]=0;}
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]>max)
                {
                    max=a[i][j];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==max)
                {
                rowcount[i]+=1;

                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[j][i]==max)
                {
                    colcount[i]+=1;

                }
            }
        }
        int tworow=0,twocol=0,maxcol=0,maxrow=0;
        for(int i=0;i<n;i++)
        {
            if(rowcount[i]>maxrow)
            {
                maxrow=i;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(colcount[i]>maxcol)
            {
                maxcol=i;
            }
        }

        for(int i=0;i<n;i++)
        {if(i==maxrow)
            continue;
            else{
            if(rowcount[i]>=2)
            {
                tworow+=1;
            }}
        }
        for(int i=0;i<m;i++)
        {if(i==maxcol)
            continue;
            else {
            if(rowcount[i]>=2)
            {
                tworow+=1;
            }
        }
        }
        
        // cout<<"column "<<twocol<<" row "<<" "<<tworow<<endl;
        twocol>2&&tworow>2?cout<<max<<endl:cout<<max-1<<endl;

    }
}