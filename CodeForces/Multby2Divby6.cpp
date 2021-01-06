#include <iostream>
#include <cmath>

using namespace std;




int main(){

    
    
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;
        int copyX = x;
        int y = 0;
        int n = 0;
        
        while (x % 2 == 0){
            x /= 2;
            y++;
        }

        while (x % 3 == 0){
            x /= 3;
            n++;
        }
        int m = n -y;
        
        //cout << y << " " << n << " " << m << '\n'; 
        
        if (pow(2,m)*copyX/pow(6,n) != 1 || m < 0  || n < 0){
            cout << -1 << '\n';
        }
        else {
            
            cout << -y + 2*n << "\n";
        }

    }
    
}

/*
int y = 0;
        int n = 0;
        
        while (x % 2 == 0){
            x /= 2;
            y++;
        }

        while (x % 3 == 0){
            x /= 3;
            n++;
        }
        int m = n -y;
        
        //cout << y << " " << n << " " << m << '\n'; 
        
        if (m <= 0){
            cout << -1 << '\n';
        }
        else {
            cout << y + 2*n << "\n";
        }
    */