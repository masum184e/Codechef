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
    ll likes[N],comments[N],sum[N];
    for(int i=0;i<N;i++)cin>>likes[i];
    for(int i=0;i<N;i++)cin>>comments[i];

    for(int i=0;i<N;i++){
      sum[i]=likes[i]+comments[i];
    }

    ll max_like,max_sum,max_index;
    max_like=likes[0];
    max_sum=sum[0];
    max_index=0;
    for(int i=0;i<N;i++){
      if(max_like<likes[i] || (max_like<=likes[i] && max_sum<sum[i])){
        max_like=likes[i];
        max_sum=sum[i];
        max_index=i;
      }
    }
    cout<<max_index+1<<endl;

  }
  return 0;
}
