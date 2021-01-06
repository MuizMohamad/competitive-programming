#include <iostream>
#include <cmath>

using namespace std;

int prime_check(long long n){
    long long int count = 0;
    for (long long int i = 1; i * i <= n; i++) {
            if (n%i==0) {
                if (n/i == i) {
                    count++;
                }
                else {
                    count = count + 2;
                }
                if (count>2) {
                    return 0;
                }
            }
        }
        if (count==2) {
            return 1;
        }
        return 0;
}

bool isPrime(long long n)
{
   
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long limit=sqrt(n);
    if(n%2==0)
        return false;
    for(int j=3; j<=limit; j+=2){
        if(n%j==0)
            return false;
        }
    return true;
}

int main(){

    long long num;
    int t;
    cin >> t;

    while (t--){

        cin >> num;
        long long sqr = sqrt(num);
        if( sqr*sqr==num && isPrime(sqr) == true) 
            printf("YES\n");
        else
            printf("NO\n");

    }
}
