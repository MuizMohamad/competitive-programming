#include <iostream>

using namespace std;

int main(){
    int r,g,b;
    cin >> r >> g >> b;
    int time = 0;
    while (r > 0 || g > 0 || b > 0){
        int test = time % 3;
        //cout << time << " " << r << " " << g << " " << b << endl;
        if (test == 0){
            r -= 2;
        }
        else if (test == 1){
            g -= 2;
        }
        else {
            b -= 2;
        }
        
        time++;
    }

    cout << time + 30 -1;
}