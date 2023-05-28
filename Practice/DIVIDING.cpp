#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll N,c,s;
  c=s=0;
  cin>>N;
  ll C[N];
  for(ll i=0;i<N;i++){
    cin>>C[i];
    c+=(i+1);
    s+=C[i];
  }
  (c==s)?cout<<"YES"<<endl:cout<<"NO"<<endl;



  return 0;
}
