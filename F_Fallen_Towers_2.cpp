#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 myrand(time(0));
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
void write(ll x){
	if(x<0){
		putchar('-');
		x=-x;
	}
	static int sta[35];
	int top=0;
	do{
		sta[top++]=x%10,x/=10;
	}while(x);
	while(top)putchar(sta[--top]+'0');
}
ll n,a[100005],b[100005];
int t;
bool check(int x)
{
	for(int i=1;i<=n;i++)
    b[i]=0;
	ll sum=0;
	for(int i=1;i<=n;i++)
    {
		sum-=b[i];
		ll tmp=max(0ll,i-(n-x));
		if(sum<tmp)return 0;
		int id=i+a[i]+(sum++)-tmp+1;
		if(id<=n)++b[id];
	}
	return 1;
}
int main(){
	t=read();
	while(t--){
		n=read();
		for(int i=1;i<=n;i++)
        a[i]=read();
		int l=0,r=n+1,ans;
		while(l<=r){
			int mid=(l+r)>>1;
			if(check(mid))ans=mid,l=mid+1;
			else r=mid-1;
		}
		write(ans+1);puts("");
	}
	return 0;
}