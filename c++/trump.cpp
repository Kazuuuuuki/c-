#include <iostream>

int num;
int min_times = 0;
int tmp_before;
int tmp_after;

int main(){
    std::cin >> num;
    int array[num];

    for (int i = 0; i < num; i++){
        std::cin >> array[i];
    }

    for (int j = 1; j <= num; j++){
        for (int i = 0; i < num; i++){
            if (array[i] == j){
                if (i+1 != j){
                    min_times += 1;
                    for (int k = j;k<=i+1;k++){
                        if (j == k){
                            tmp_before = array[k-1];
                            array[k-1] = array[i];
                            continue;
                        }
                        tmp_after = array[k-1];
                        array[k-1] = tmp_before;
                        tmp_before = tmp_after;
                    }
                    break;
                }
            }
        }
    }
     std::cout << min_times << std::endl;


  return(0);
}

