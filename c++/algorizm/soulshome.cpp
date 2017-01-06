

#include <iostream>
#include <string>


int main(){
  int n;
  int gnum, bnum, rnum;
  gnum = bnum = rnum = 0;
  //
  std::cin >> n;
  char m[n];
  std::cin >> m;
  if (n == 0){
     std::cout << 0 <<"\n";
     return (0);
  }

  for (int i = 0; i < n; i++){
    if (m[i] == 'G'){
      ++gnum;
    } else if (m[i] == 'B'){
      ++bnum;
    } else {
      ++rnum;
    }
  }

  std::cout << gnum%2 + bnum%2 + rnum%2 <<"\n";

  return (0);
}


