#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  int den[8] = {1,2,5,10,20,50,100,200};
  int dp[201][8];

  for(int i=0;i<8;i++) dp[0][i]=1;
  for(int i=0;i<sizeof(den)/sizeof(*den);i++) {
    int coin = den[i];
    for(int j=1;j<=200;j++) {
      dp[j][i] = (i>0?dp[j][i-1]:0) + (j>=coin?dp[j-coin][i]:0);
    }
  }

  cout << dp[200][7] << "\n"; 

}
