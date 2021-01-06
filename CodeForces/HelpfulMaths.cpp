#include <iostream>

int main(){


    std::string maths; 
    std::cin >> maths;

    int oneCounter = 0;
    int twoCounter = 0;
    int threeCounter = 0;

    for (int i = 0 ; i < maths.length() ; ++i){
        if (i % 2 == 0){

            if (maths.at(i) == '1'){
                oneCounter += 1;
            }
            if (maths.at(i) == '2'){
                twoCounter += 1;
            } 
            if (maths.at(i) == '3'){
                threeCounter += 1;
            }  
        }

    }

    std::string ans;
    for ( int i = 0; i < maths.length() ; ++i ){
        
        if (i % 2 == 0){
            
            if (oneCounter > 0){
                ans += "1";
                oneCounter--;
            }
            else {
                if (twoCounter > 0){
                    ans += "2";
                    twoCounter--;
                }
                else {
                    if (threeCounter > 0){
                        ans += "3";
                        threeCounter--;
                    }

                }
            }
        }
        else {
            ans += "+";
        }
    }

    std::cout << ans;

}