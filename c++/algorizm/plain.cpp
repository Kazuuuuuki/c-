

#include <iostream>
#include <algorithm>


int ans(int *a, int *b, int t, int x, int y, int n, int m){
  if (t > a[n-1]){
    return 0;
  }
  t = *std::lower_bound(a, a+n, t);
  t = t + x;
  if (t > b[m-1]){
    return 0;
  }
  t = *std::lower_bound(b, b+m, t);
  t = t + y;
  return 1 + ans(a, b, t, x, y, n, m);

}

int main(){
  int n, m;
  int x, y, answer;

  std::cin >> n;
  std::cin >> m;

  std::cin >> x;
  std::cin >> y;

  int a[n], b[m];

  for (int i=0; i < n; i++){
    std::cin >> a[i];
  }


  for (int j=0; j < m; j++){
    std::cin >> b[j];
  }

  answer = ans(a, b, 0, x, y, n, m);



  std::cout << answer <<"\n";

  return (0);
}