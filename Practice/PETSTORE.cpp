#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N;
    map<int, int> m;
    cin>>N;
    ll A[N];
    for(ll i=0;i<N;i++){
      cin>>A[i];
      m[A[i]]++;
    }

    bool status = true;
    for(auto j: m){
      if(j.second%2!=0){
        status = false;
        break;
      }
    }

    (status)?cout<<"YES"<<endl:cout<<"NO"<<endl;

  }
  return 0;
} 
