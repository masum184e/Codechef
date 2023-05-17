#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll A;
    cin>>A;
    bool a,b;
    a=b=false;
    if( A%2==0 && A%7==0)a=true;
    if( A%2!=0 && A%9==0)b=true;

    if(!a && !b)cout<<"Charlie"<<endl;
    else if(a)cout<<"Alice"<<endl;
    else if(b)cout<<"Bob"<<endl;
  }
  return 0;
}
