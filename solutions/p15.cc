#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  long mat[21][21];
  for(int i=1;i<21;i++) {
    mat[i][0]=1;
    mat[0][i]=1;
  }
  for(int i=1;i<21;i++) {
    for(int j=1;j<21;j++) {
      mat[i][j] = mat[i-1][j]+mat[i][j-1];
    }
  }
  cout << mat[20][20] << "\n";
}
