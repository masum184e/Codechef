#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    map<int, int> m;
    ll b[3];
    for(ll i=0;i<3;i++){
      cin>>b[i];
      m[b[i]]++;
    }

    bool status = false;
    for(auto j: m){
      if(j.first==0 && j.second>=2)status=true;
    }

    (status)?cout<<"Water filling time"<<endl:cout<<"Not now"<<endl;

  }
  return 0;
}
