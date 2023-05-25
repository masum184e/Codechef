#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll A,B,i,ca,cb;
    cin>>A>>B;

    i=1;
    ca=cb=0;
    while(true){
      (i%2==0)?cb+=i:ca+=i;
      if(ca>A){
        cout<<"Bob"<<endl;
        break;
      }else if(cb>B){
        cout<<"Limak"<<endl;
        break;
      }
      i++;
    }
  }
  return 0;
}
