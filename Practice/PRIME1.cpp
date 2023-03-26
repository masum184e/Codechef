#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool is_prime(int item){
  if(item==0 || item==1)return false;
  for(int i=2;i<=sqrt(item);i++){
    if(item%i==0)return false;
  }
  return true;
}
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll m,n;
    cin>>m>>n;
    for(;m<=n;m++){
      if(is_prime(m))cout<<m<<endl;
    }
  }
  return 0;
}
