#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,K,store=0,i;
    cin>>N>>K;
    ll A[N];
    for(i=0;i<N;i++)cin>>A[i];

    bool status=true;
    for(i=0;i<N;i++){
      if((store+A[i])>=K)store=store+(A[i]-K);
      else{
        status=false;
        break;
      }
    }
    (status)?cout<<"YES"<<endl:cout<<"NO "<<(i+1)<<endl;
  }
  return 0;
}
