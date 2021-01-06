#include <iostream>

int main(){

    int x;
    
    // int matrix[5][5];
    for (int i = 0 ; i < 5 ; ++i){

        for(int j = 0 ; j < 5 ; ++j){
            
            int tmp;

            std::cin >> tmp;
            // matrix[i][j] = tmp;
            if (tmp == 1){
                x = abs(i-2) + abs(j-2);
            }

        }
    }

    std::cout << x;

}