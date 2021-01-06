#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,string>> cs;
    while (n--){
        int tmp;
        string tmpS;
        cin >> tmp >> tmpS;
        pair<int,string> tmpP = {tmp,tmpS};
        cs.push_back(tmpP);
    }

    //sort(cs.begin(),cs.end());
    //cout << endl;
    int lowA = 100001;
    int lowB = 100001;
    int lowC = 100001;
    int lowAB = 100001;
    int lowBC = 100001;
    int lowAC = 100001;
    int lowABC = 100001;
    for (auto x : cs){
        if (x.second == "A"){
            lowA = min(lowA,x.first);
        }
        else if (x.second == "B"){
            lowB = min(lowB,x.first);
        }
        else if (x.second == "C"){
            lowC = min(lowC,x.first);
        }
        else if (x.second == "AB" || x.second == "BA"){
            lowAB = min(lowAB,x.first);
        }
        else if (x.second == "BC" || x.second == "CB"){
            lowBC = min(lowBC,x.first);
        }
        else if (x.second == "CA" || x.second == "AC"){
            lowAC = min(lowAC,x.first);
        }
        else if ( ((x.second).find('A') != std::string::npos) && ((x.second).find('B') != std::string::npos) && ((x.second).find('C') != std::string::npos)){
            lowABC = min(lowABC,x.first);
        }
    }
    int minS = 1000000;
    vector<string> vit= {"A","B","C","AB","BC","AC","ABC"};
    vector<int> minSums = {lowA,lowB,lowC,lowAB,lowBC,lowAC,lowABC};
    
    bool found = false;
    for (int mask = 0 ; mask < (1 << 7) ; mask++){
        long long sum = 0;
        string test = "";
        test.clear();
        
        for (int i = 0 ; i < 7 ; ++i){

            if (mask & (1 << i) && (minSums[i] < 100001)){
                test.append(vit[i]);
                sum += minSums[i];
            }
        }
        


        if (((test).find('A') != std::string::npos) && ((test).find('B') != std::string::npos) && ((test).find('C') != std::string::npos)){
            found = true;
            if (sum < minS){
               // cout << test << " " << sum << endl;
                minS = sum;
            }
        }
            
    }
    if (!found){
        cout << -1;
    }
    else {
        cout << minS;
    }
    
}