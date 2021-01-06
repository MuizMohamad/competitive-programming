#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n ;
    int sol[n];
    int push = 0;
    int j = n;
    for (int i = 0 ; i < n ; ++i){  
        sol[i] = j;
        j--;
    }

    
    for (int i = 0 ; i < n ; ++i){
        int solInt = sol[i];
        int counter = 0;
        while (solInt > counter){
            if (counter == 0){
                push += 1;
            }
            else {
                push += i + 1;
            }
            
            counter ++;
        }
    }

    cout << push;
    

}