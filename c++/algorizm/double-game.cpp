
#include <iostream>

//1 .. aoki
//2 .. Takahashi
//3 .. Takahashi
//4 .. Takahashi
//5 .. Takahashi
//6 .. aoki
//7 ..
int main(){
  unsigned long long n, i, j;
  i = 1;
  j = 0;
  std::cin >> n;

  while(n >= 2*i ){
    if (n < (2*i+1)*2){
      i = 2*i+1;
    }else{
      i = 2*i;
    }
    j++;
  }

if (j % 2 == 0){
  std::cout << "Aoki\n";
}else{
  std::cout << "Takahashi\n";
}



  return (0);
}