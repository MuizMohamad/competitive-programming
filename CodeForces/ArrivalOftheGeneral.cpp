#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int copyN = n;
    
    int max = 0;
    int min = 100;
    int i = 0;
    int maxIndex = 0; 
    int minIndex = 0;

    while (n--){
        int tmp;
        cin >> tmp;
        if (tmp > max){
            max = tmp;
            maxIndex = i;
        }
        if (tmp <= min){
            min = tmp;
            minIndex = i;
            //cout << min << '\n';
        }
        i++;
    }
    //cout << max << " " << min << endl;
    //cout << maxIndex << " " << minIndex << endl;
    int result;
    if (maxIndex < minIndex){
        result =((copyN-1)-(minIndex)) + maxIndex;
    }
    else {
        result = ((copyN-1)-(minIndex)) + maxIndex - 1;
    }
    cout << result;
}