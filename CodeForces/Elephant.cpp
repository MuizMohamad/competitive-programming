#include <iostream>

int main(){

    int x;
    int k = 0;

    std::cin >> x;

    while (x != 0){

        if (x-5 >= 0){
            x -= 5;
            k++;
        }
        else {

            if ( x-4 >= 0){
                x -= 4;
                k++;
            }
            else {
                if (x-3 >= 0){
                    x -= 3;
                    k++;
                }
                else {
                    if (x-2 >= 0){
                        x -= 2;
                        k++;
                    }
                    else {
                        if (x - 1 >= 0){
                            x -= 1;
                            k++;
                        }
                    }
                }
            }

        }

    }

    std::cout << k;
}