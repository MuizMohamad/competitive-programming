#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int nCopy = n;
    int counter = 0;
    int num = 0;
    int oneC = 0;
    int twoC = 0;
    int threeC = 0;
    int fourC = 0;

    while (n--){
        int s;
        cin >> s;
        
        if (s == 1){
            oneC++;
        }
        else if (s == 2){
            twoC++;
        }
        else if (s == 3){
            threeC++;
        }
        else if (s == 4){
            fourC++;
        }

    }

    int twoPair = twoC/2;
    counter += twoPair;
    if (twoPair*2 != twoC){
        twoC -= twoPair*2;
    }
    else {
        twoC = 0;
    }


    if (oneC > threeC){
        counter += threeC;
        oneC -= threeC;
        threeC = 0;
    }
    else {
        counter += oneC;
        threeC -= oneC;
        oneC = 0;
    }

    counter += fourC;
    fourC = 0;

    if (threeC > 0) {
        counter += threeC;
        threeC = 0;
    }
    //cout << oneC << " " << twoC << " " << threeC << " " << fourC << endl;
    if (oneC > 0 && twoC > 0){
        if (oneC >= 2){
            int oneCoolPair = oneC / 2;
            counter += 1;
            twoC = 0;
            oneC -= 2;
            
        }
        else{
            counter += oneC;
            twoC = 0;
            oneC = 0;
        }
        /*
        if (oneC > twoC){
            counter += twoC;
            oneC -= twoC;
            twoC = 0;
        }
        else if (oneC < twoC){
            counter += oneC;
            twoC -= oneC;
            oneC = 0;
        }
        else {
            counter += oneC;
            twoC = 0;
            oneC = 0;
        }
        */
    }
    if (oneC > 0 && twoC == 0){
        int onePair = oneC/4;
        counter += onePair;
        if (onePair*4 != oneC){
            oneC -= onePair*4;
            counter += 1;
    
        }
        oneC = 0;

    }
    if(twoC > 0 && oneC == 0){
        int twoPair = twoC/2;
        counter += twoPair;
        if (twoPair*2 != twoC){
            twoC -= twoPair*2;
            counter += twoC;
            
        }
        twoC = 0;
    }
    
    //cout << oneC << " " << twoC << " " << threeC << " " << fourC << endl;
    cout << counter;

}