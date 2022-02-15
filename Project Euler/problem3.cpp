#include <iostream>
#include <math.h>
using namespace std;

bool is_Prime(long long x)
{
  // invalid input
  if (x <= 1)
    return false;
  
  if (x % 2 == 0) return false;
  // process all potential divisors
  for(int i = 3; i <= x / 2; i+=2) {
      if(x % i == 0) {
         return false;
      }
   }

  // no divisor found, therfore it's a prime number
  return true;
}

int main(){


    long long target = 600851475143;
    long long test_limit = floor(600851475143/2);

    long long test_prime = 3;

    while(!is_Prime(target)){
        while(test_prime < test_limit){

            if (is_Prime(test_prime)){
                if (target % test_prime == 0){
                    cout << "cur smallest :" << test_prime << "\n"; 
                    break;
                }
                else {
                    test_prime+=2;
                }
            }
            else{
                test_prime+=2;
            }
            //cout << test_prime << "\n";    
        }

        target /= test_prime;
    }
    
    cout << "target" << target << '\n';

    return 0;
}