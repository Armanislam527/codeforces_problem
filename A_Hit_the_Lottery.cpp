#include <iostream>
using namespace std;

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >>n;
  
  int res=0;
  res+=n/100;
  if (res*100>n){
    res--;
  }
  n=n%100;
  int m=n/20;
  if (m*20>n){
    res+=m-1;
  }
  else{
    res+=m;
  }
  n=n%20;
  m=n/10;
  if (m*10>n){
    res+=m-1;
  }
  else{res+=m;}
  n=n%10;
  m=n/5;
  if (m*5>n){
    res+=m-1;
  }
  else{
    res+=m;
  }
  n=n%5;
  res+=n;
  cout << res << endl;
}