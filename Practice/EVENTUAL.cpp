#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    map<char, int> m;
    ll N;
    cin>>N;
    string S;
    cin>>S;

    for(int i=0;i<N;i++)m[S[i]]++;

    bool status=true;
    for(auto j:m){
      if(j.second%2!=0){
        status=false;
        break;
      }
    }
    (status)?cout<<"YES"<<endl:cout<<"NO"<<endl;

  }
  return 0;
}
