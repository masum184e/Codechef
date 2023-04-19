#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll A,B,X;
    cin>>A>>B>>X;
    ((B-A)%(2*X)==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
