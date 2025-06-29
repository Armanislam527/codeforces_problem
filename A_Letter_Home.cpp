#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[n];
        for(int i=0;i++;i<n){
            cin>>a[i];
        }
        int pos=0;
        // pos=abs(m-a[0])>abs(m-a[0])?abs(m-a[n-1]):abs(m-a[0]);
        if(abs(m-a[0])>abs(m-a[n-1])){
            pos=abs(m-a[n-1]);
        }
        else{
            pos=abs(m-a[0]);
        }
        pos+=a[n-1]-a[0];
        cout<<pos<<endl;
    }

return 0;
}