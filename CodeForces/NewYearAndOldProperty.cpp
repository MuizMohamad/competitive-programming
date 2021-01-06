#include <bitset>
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long long a,b;
    scanf("%lld%lld", &a,&b);
    long long count = 0;
   
    long long power = 1;
    long long test = powl(2,power) - 1;
    while (power <= 64){
        test = powl(2,power) - 1;
        //cout << power << endl;
        int testCount = 0;

        for (long long i = 0 ; i < power-1 ; i++){
            long long newS = test - powl(2,i);
            if (newS >= a && newS <= b){
               
                //cout << newS << " " << i << endl;
                count++;
            }
            
        }
        //cout << endl;
       
        power++; 
    }
    //cout << fixed;
    //bitset<60> tes2t( ((powl(2,56) - 1))); // - (pow(2,44))));
    //cout << tes2t << endl;
   
    //cout << (36011204832919551 >= 36011204832919552) << endl;
    //cout << ((pow(2,55) - 1 - (pow(2,44))) <= 1124800395214847) << endl;
    //cout << (36011204832919551 - (pow(2,55) - 1 - (pow(2,44)))) << endl;
    cout << count;
}