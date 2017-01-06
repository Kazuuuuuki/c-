
#include <iostream>

int main(){
  int L, n, count, i, j;
  std::cin >> count;
  int max_time[1000010];
  int min_time[1000010];

  for (j = 0; j < count; j++){
    std::cin >> L;
    std::cin >> n;
    int ant_place;
    int distance;
    max_time[j] = 0;
    min_time[j] = 0;
    for (i = 0; i < n; i++){
      std::cin >> ant_place;

      distance = std::min(ant_place, L - ant_place);
      min_time[j] = std::max(min_time[j], distance);


      distance = std::max(ant_place, L - ant_place);
      max_time[j] = std::max(max_time[j], distance);
    }

  }

  for (int k = 0; k < count; k++){
    std::cout << min_time[k] << " " << max_time[k] <<"\n" ;
  }
  return (0);
}