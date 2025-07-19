// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t,m,n;
//     cin>>t;
//     while(t--){
//         cin >>m>>n;
//         vector<int> s1,s2;
//         int ans=0,i=0;
//         while(m--){
//             s1[i++]=m%10;
//             s2[i++]=n%10;
//         }
//         while(i--){
//             if(s1[i]==s2[i]){
//                 ans+=2;
//             }
//             else if(abs(s1[i]-s2[i])==1)
//             {ans+=1;}
//             else
//             {break;}

//         }
//         cout<<ans<<endl;
//         }
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,m,n;
    cin>>t;
    while(t--){
        cin >>m>>n;
        vector<int> s1,s2;
        int ans=0,i=0;
        int temp_m = m;
        int temp_n = n;
        
        // Pre-allocate vector size
        while(temp_m > 0){
            s1.push_back(temp_m%10);
            s2.push_back(temp_n%10);
            temp_m /= 10;
            temp_n /= 10;
            i++;
        }
        
        // Reverse vectors since digits were added in reverse order
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        for(int j=0;j<i;j++){
            if(s1[j]==s2[j]){
                ans+=2;
            }
            else if(abs(s1[j]-s2[j])==1)
            {ans+=1;}
            else if((s1[j]-s2[j])==9&&s1[j-1]-s2[j-1]==-1||(s1[j]-s2[j])==-9&&s1[j-1]-s2[j-1]==1)
            {ans+=1;}
        }
        cout<<ans<<endl;
    }
    return 0;
}
