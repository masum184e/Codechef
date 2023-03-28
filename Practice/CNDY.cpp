#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,l;
    cin>>N;
    l=2*N;
    ll A[l];
    map<int, int> m;
    for(int i=0;i<(l);i++){
      cin>>A[i];
      m[A[i]]++;
    }
    map<int, int>::iterator itr;
    bool status=false;
    for(itr=m.begin();itr!=m.end();itr++){
      if(itr->second>2)status=true;
    }
    (status)?cout<<"No"<<endl:cout<<"Yes"<<endl;
  }
  return 0;
}
