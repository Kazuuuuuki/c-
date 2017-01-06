#include <iostream>

int times;
int i = 0;
int min;
int num;

int main(){

   std::cin >> times;

   for(int i = 0; i < times; i++){
       std::cin >> num;
       if (i == 0){
           min = num;
       }
       if (min > num){
           min = num;
       }
   }

   std::cout << min << std::endl;


  return (0);
}