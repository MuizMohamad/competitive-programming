#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n,k;
        cin >> n >> k;
        long long Nth =  (n+1)/2;
        if (k % 2 == 0){
            if (n % 2 == 0){
                
                if (k*k > n){
                    cout << "NO" << "\n";
                }
                else{
                    cout << "YES" << "\n";
                }  
            }
            else {
                cout << "NO" << "\n";
            }
        }
        else {
            if (n % 2 == 1){
               
                
                if (k*k > n ){
                    cout << "NO" << "\n";
                }
                else{
                    cout << "YES" << "\n";
                } 
            }
            else {
                cout << "NO" << "\n";
            }
        }
    }
}