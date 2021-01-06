#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.length();
    long long counter = 0;

    for (int i = n-1 ; i >= 0 ; i--){

        string l = "";
        l.push_back(s[i]);
        int last = stoi(l);
        if (last % 4 == 0 ){
            //cout << "last "<< last << endl;
            counter++;
        }

        if( i > 0 ){
            string lT = {};
            lT.push_back(s[i-1]);
            lT.push_back(s[i]);
            int lastTwo = stoi(lT);
            //cout << "lasttwo " << lastTwo << " lt " << lT << endl;
            if (lastTwo % 4 == 0){
                counter += i;
            }
        }
        
        
            
    }
    cout << counter;
    
    
}