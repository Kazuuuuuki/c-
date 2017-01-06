
#include <iostream>
#include <string>

 bool getAns(std:: string candi, std::string stri, int count, int max){
   if (count == max - 1){
     std::cout << candi + stri  <<"\n";
   }else{
     getAns(candi + stri, "a", count + 1, max);
     getAns(candi + stri, "b", count + 1, max);
     getAns(candi + stri, "c", count + 1, max);
   }
 }

int main(){
  int n;
  std::cin >> n;
  getAns("", "a", 0 , n);
  getAns("", "b", 0 , n);
  getAns("", "c", 0 , n);




  return (0);
}