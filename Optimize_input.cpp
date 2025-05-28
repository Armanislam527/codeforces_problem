#include <bits/stdc++.h>
// #define ll long long
typedef long long ll;
using namespace std;
inline ll read(){
	ll x=0,w=1;
	char ch=0;
	while(ch<'0'||ch>'9'){
		if(ch=='-')w=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=(x<<3)+(x<<1)+(ch^48);
		ch=getchar();
	}
	return x*w;
}
int main(){
    cout<<"Enter a number to test the app:";
    int r= read();
    cout<<r<<endl;
return 0;
}