#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  // ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,X,Y,one,zero;
    one=zero=0;
    cin>>N>>X>>Y;
    string S;
    cin>>S;
    for(ll i=0;i<N;i++)(S[i]=='0')?zero++:one++;

    if(one==N || zero==N)cout<<"0"<<endl;
    else (X<Y)?cout<<X<<endl:cout<<Y<<endl;
  }
  return 0;
}
