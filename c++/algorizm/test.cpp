
#include <iostream>

int main(){
  int a[10];
  for (int i = 0; i < 10; i++){
    a[i] = i;
  }
  int n;
  std::cin >> n;
  std::cout << a[n/2];
  return (0);
}