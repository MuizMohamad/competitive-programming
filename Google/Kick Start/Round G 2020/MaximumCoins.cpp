#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> table(1000, vector<long long> (1000, 0));

long long t,n;

int main(){
    cin >> t;
    for (long long i = 1; i <= t; ++i){
        cin >> n;
        for (long long j = 0 ; j < n ;++j){
            for (long long k = 0 ; k < n ;++k){
                long long tmp;
                cin >> tmp;
                table[j][k] = tmp;
            }          
        }

        long long maxSum = 0;

        // horizontal

        for (long long j = 0 ; j < n ; j++){

            long long x = j;
            long long y = 0;
            long long sm = table[x][y];

            while(y+1 < n && x+1 < n){
                sm += table[x+1][y+1];
                x++;
                y++;
            }

            maxSum = max(maxSum,sm);
        }

        for (long long j = 0 ; j < n ; j++){

            long long x = 0;
            long long y = j;
            long long sm = table[x][y];

            while(y+1 < n && x+1 < n){
                sm += table[x+1][y+1];
                x++;
                y++;
            }

            maxSum = max(maxSum,sm);
        }
        
        cout << "Case #" << i << ": " << maxSum << "\n";  

    }
}