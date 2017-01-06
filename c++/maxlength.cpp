#include <iostream>
#include <math.h>
int times;
int i = 0;
double max;
double x;
double y;
double length;
double max_pair[2][2];
double max_length;

int main(){

   std::cin >> times;
   double points[times][2];

   for(int i = 0; i < times; i++){
       std::cin >> x;
       std::cin >> y;

       points[i][0] = x;
       points[i][1] = y;

       if (i == 1){
           max_pair[0][0] = points[0][0];
           max_pair[0][1] = points[1][0];
           max_pair[1][0] = points[0][1];
           max_pair[1][1] = points[1][1];
           continue;
       }

       max_length = (max_pair[0][0]-max_pair[0][1]) * (max_pair[0][0]-max_pair[0][1]) + (max_pair[1][0]-max_pair[1][1]) * (max_pair[1][0]-max_pair[1][1]);

       for (int j = 0; j < i; j++){
          length = (x-points[j][0]) * (x-points[j][0]) + (y-points[j][1]) * (y-points[j][1]);
          if (max_length <= length){
              max_pair[0][0] = x;
              max_pair[0][1] = points[j][0];
              max_pair[1][0] = y;
              max_pair[1][1] = points[j][1];
              max_length = length;
          }
       }
   }

   max_length = sqrt((max_pair[0][0]-max_pair[0][1]) * (max_pair[0][0]-max_pair[0][1]) + (max_pair[1][0]-max_pair[1][1]) * (max_pair[1][0]-max_pair[1][1]));

   std::cout << max_length << std::endl;


  return (0);
}
