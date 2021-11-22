#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  int max = 1001;
  int mat[max][max];
  int i=(max-1)/2;
  int j=(max-1)/2;
  
  // 0 right 1 down 2 left 3 up
  int dir=0;

  mat[i][j]=1;
  int next_num=2;
  int l=1;

  while(next_num <= max*max) {
    for(int ti=1;ti<=l;ti++) {
      if(dir == 0) {
        j++;
      } else if(dir == 1) {
        i++;
      } else if(dir == 2) {
        --j;
      } else if(dir ==3) {
        --i;
      }
      //cout << i <<","<<j <<" "<<next_num<<"\n";
      if(j>=0 && i >=0 && j < max && i<max) mat[i][j] = next_num++;
    }
    dir = (dir+1) % 4;
    for(int ti=1;ti<=l;ti++) {
      if(dir == 0) {
        j++;
      } else if(dir == 1) {
        i++;
      } else if(dir == 2) {
        --j;
      } else if(dir ==3) {
        --i;
      }
      //cout << i <<","<<j <<" "<<next_num<<"\n";
      if(j>=0 && i >=0 && j < max && i<max) mat[i][j] = next_num++;
    }
    l++;
    dir = (dir+1) % 4;

  }
  long s=0;
  for(int i=0;i<max;i++) {
    for(int j=0;j<max;j++) {
      if(i==j || i == max-j-1) s+=mat[i][j];
    }
  }
  cout << s << "\n";
}
