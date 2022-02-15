#include <iostream>
using namespace std;

int main(){

    //first two sum = 3
    unsigned long long sum = 2;

    int t1 = 1 ,t2 = 2,nextTerm = 0;

    

    while(nextTerm < 4000000){

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        
        if (nextTerm % 2 == 0 ){
            cout << nextTerm << " ";
            sum += nextTerm;
        } 
    }
    cout << endl;
    cout << "Sum :" << sum;
}