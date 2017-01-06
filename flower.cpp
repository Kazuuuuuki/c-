#include <iostream>
#include <vector>
#include <algorithm>


int main(void){
  std::vector<int> v;
  long long int R, B, x, y;
  std::cin>> R;
  std::cin>> B;
  std::cin>> x;
  std::cin>> y;
  int min = std::min(R,B);
  for(int i = 1; i <= min ; i++){
    if (R - 1 == 0 && B - 1 == 0 ){
      v.push_back(0);
      break;
    }
    if (R - 1 == 0){
      if ((B-i)/(y-1) >= i){
        v.push_back(i);
      }else{
        v.push_back(0);
      }
      break;
    }
    if (B - 1 == 0){
      if ((R-i)/(x-1) >= i){
        v.push_back(i);
      }else{
        v.push_back(0);
      }
      break;
    }
    if (((R-i)/(x-1) + (B-i)/(y-1)) >= i)v.push_back(i);

  }
  std::cout<< v.back() << "\n";
  return 0;
}
