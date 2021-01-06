#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long nb,ns,nc;
long long pb,ps,pc;
long long rub;
string recipe;
vector<long long> rec(3,0);

bool good(long long x){
    long long needBread = x*rec[0];
    long long needSas = x*rec[1];
    long long needCheese = x*rec[2];

    long long bB = needBread - nb;
    long long bS = needSas - ns;
    long long bC = needCheese - nc;

    if (bB <= 0) bB = 0;
    if (bS <= 0) bS = 0;
    if (bC <= 0) bC = 0;

    return bB*pb + bS*ps + bC*pc <= rub;
}

int main(){

    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> rub;

    for(auto x : recipe){
        if (x == 'B') rec[0] = rec[0] + 1;
        else if (x == 'S') rec[1] = rec[1] + 1;
        else rec[2] = rec[2] + 1;
    }
    //for (auto a : rec) cout << a << " ";
    long long left = 0; // maintain left is good
    long long right = 100000000000000; // maintain right is bad

    while(left + 1 < right){

        long long mid = left + (right-left)/2;

        if (good(mid)) left = mid;
        else right = mid;

    }

    cout << left << "\n";
}