#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll A[5],P,sum=0;
    for(int i=0;i<5;i++){
      cin>>A[i];
      sum+=A[i];
    }
    cin>>P;
    (sum*P>120)?cout<<"Yes"<<endl:cout<<"No"<<endl;
  }
  return 0;
} 
