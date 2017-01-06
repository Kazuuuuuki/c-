#include <iostream>
#include <algorithm>
// cardList[arrayIndex + 1] < newNum
using namespace std;
int getMaxLengthIndex(int listLength, int *cardList ,int newNum, int arrayIndex){
  if (arrayIndex == listLength){
    return cardList[arrayIndex] > newNum ? arrayIndex : arrayIndex + 1;
  } else if (arrayIndex == 1){
    return cardList[arrayIndex] > newNum ? 1 : 2;
  } else if ( arrayIndex + 1 == listLength ){
    if (cardList[arrayIndex] < newNum && cardList[arrayIndex+1] > newNum){
      return arrayIndex + 1;
    } else if (cardList[arrayIndex] > newNum){
      return arrayIndex;
    } else {
      return arrayIndex + 2;
    }
  }else {

    if (cardList[arrayIndex] < newNum && cardList[arrayIndex+1] > newNum) {
      return arrayIndex + 1;
    } else if (cardList[arrayIndex] > newNum ){
      return (arrayIndex % 2) == 0 ? getMaxLengthIndex(listLength ,cardList ,newNum, arrayIndex/2) : getMaxLengthIndex( listLength ,cardList , newNum, (arrayIndex-1)/2);
    } else {
      return (arrayIndex % 2) == 0 ? getMaxLengthIndex(listLength , cardList ,newNum, 3*arrayIndex/2) : getMaxLengthIndex( listLength ,cardList , newNum, (arrayIndex-1)/2 + arrayIndex);
    }
  }
}

int main(void){
    int n;
    cin>> n;
    int a[100000];
    // int a[10];
    int listLength = 0;
    int maxLength = 0;
    for (int i = 0; i < n; i++){
      int b;
      cin>> b;
      if (i == 0){
        a[1] = b;
        listLength = 1;
      } else if ( listLength == 1){
        if (a[1] > b){
          a[1] = b;
        } else {
          a[2] = b;
          listLength = 2;
        }
      } else if (listLength == 2){
        if (a[1] >b){
          a[1] = b;
        } else if (a[1] < b && b < a[2] ){
          a[2] = b;
        } else if ( b > a[2]){
          a[3] = b;
          listLength = 3;
        } else {
        }
      } else if (listLength == 3){
        if (a[1] >b){
          a[1] = b;
        } else if (a[1] < b && b < a[2] ){
          a[2] = b;
        }  else if (a[2] < b && b < a[3] ){
          a[3] = b;
        }  else if ( b > a[3]){
          a[4] = b;
          listLength = 4;
        } else {
        }

      }else if ((listLength % 2) == 0) {
        maxLength = getMaxLengthIndex(listLength, a, b, listLength/2);
        if (maxLength > listLength){
          listLength = maxLength;
          a[maxLength] = b;
        } else {
          a[maxLength] = b;
        }
      } else {
        maxLength = getMaxLengthIndex( listLength, a , b, (listLength-1)/2 );
        if (maxLength > listLength){
          listLength = maxLength;
          a[maxLength] = b;
        } else {
          a[maxLength] = b;
        }
      }
    }
    cout<< n - listLength << endl;
    return 0;
}
