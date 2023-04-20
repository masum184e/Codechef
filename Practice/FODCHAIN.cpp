#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll E,K,count=0;
    cin>>E>>K;
    while(E!=0){
      count++;
      E=floor(E/K);
    }
    cout<<count<<endl;
  }
  return 0;
}
