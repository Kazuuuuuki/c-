

#include <iostream>


int main(){
  int n, m, quotient, mod, tmp, first_tmp, f;
  int T[6] = {1, 2, 3, 4, 5, 6};

  std::cin >> n;
  m = n % 30;
  quotient = m / 5;
  mod = m % 5;


  if (quotient != 0 && quotient != 6){
    for (int l = 0; l < quotient; l++){
      for (f = 0; f < 6; f++){
        if (f == 0){
          first_tmp = T[0];
        }
        if (f == 5){
          T[f] = first_tmp;
          continue;
        }
        T[f] = T[f+1];
      }
    }
  }

  for(int j = 0; j < mod; j++){
    tmp = T[j];
    T[j] = T[j+1];
    T[j+1] = tmp;
  }

  for(int k = 0; k < 6; k++){
    std::cout << T[k];
  }

  std::cout << "\n";



  return (0);
}