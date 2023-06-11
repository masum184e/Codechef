#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
  ll X,l,B,C;
  cin>>X;
  l=(X*3)-X;
  B=l/2;
  C=l-B;

  cout<<C-1<<" "<<X<<" "<<B+1<<endl;
  }
  return 0;
}
