#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll A,B;
  char C;
  cin>>A;
  cin>>B;
  cin>>C;
  switch(C){
    case '+':
      cout<<(A+B)<<endl;
      break;
    case '-':
      cout<<(A-B)<<endl;
      break;
    case '*':
      cout<<(A*B)<<endl;
      break;
    case '/':
    printf("%0.7lf\n",((double)A)/B);
      // ((((double)A)/B)==(A/B))?cout<<(A/B)<<".0"<<endl:cout<<(((double)A)/B)<<endl;
      break;
  }

  return 0;
}
