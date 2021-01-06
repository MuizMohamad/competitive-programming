#include <iostream>

int main(){
    
    int n;
    std::cin >> n;

    int min = 0;
    int curPas = 0;
    for (int i = 0 ; i < n ; ++i){

        int exit,enter;
        std::cin >> exit >> enter;
        curPas = curPas - exit + enter;
        if (curPas >= min){
            min = curPas;
        }
    }

    std::cout << min;

}