#include <iostream>
#include <algorithm>


int getAns(int* d, int* b, int* c, int type){
  int max = 0;
  int candidate[3][3] = 0;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (i != 2)candidate[i][j] += c[i][j];
      if (j != 2)candidate[i][j] += b[i][j];
      if (i-1 >= 0)candidate[i][j] += b[i-1][j];
      if (i+1 <= 2)candidate[i][j] += b[i][j];
      if (j-1 >= 0)candidate[i][j] += c[i][j-1];
      if (j+1 <= 2)candidate[i][j] += c[i][j];

      max = std::max(max, candidate[i][j]);
    }
  }
}


int main(void){
    int b[3][2];
    int c[2][3];
    int d[3][3];

    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 2; j++){
        std::cin >> b[i][j];
      }
    }

    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 3; j++){
        std::cin >> c[i][j];
      }
    }

    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        d[i][j] = 0;
      }
    }

    int k = 0;
    while(k < 9){

    }
    return 0;
}
