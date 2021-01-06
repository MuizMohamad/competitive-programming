#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    long long minG,maxG;
    long long perTeamMin;
    if ( n % m == 0){
        perTeamMin = n/m;
        minG = m*(perTeamMin*(perTeamMin+1)/2 - perTeamMin); 
    }
    else{
        perTeamMin = n/m + 1;
        long long extraTeam = m -(n - (perTeamMin-1)*m);
        long long extraPerson = perTeamMin-1;
        minG = (m-extraTeam)*(perTeamMin*(perTeamMin+1)/2 - perTeamMin) + 
                (extraTeam)*(extraPerson*(extraPerson+1)/2 - extraPerson);
    }
    

    long long perTeamMax = n - (m-1);
    maxG = (perTeamMax*(perTeamMax+1)/2 - perTeamMax);

    cout << minG << " " << maxG;
}