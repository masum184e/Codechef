#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N;
    cin>>N;
    string fname[N], lname[N];
    map<string, int> m;
    for(ll i=0;i<N;i++){
      cin>>fname[i]>>lname[i];
      m[fname[i]]++;
    }

    for(ll i=0;i<N;i++){
      (m[fname[i]]>1)?cout<<fname[i]<<" "<<lname[i]<<endl:cout<<fname[i]<<endl;
    }

  }
  return 0;
}
