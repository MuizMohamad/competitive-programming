#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int zeroRow(vector<vector<int>> matrix,int n ,int m){
    int counter = 0;
    for (int i = 0 ; i < n ; ++i){
        vector<int> tmp = matrix.at(i);
        auto itr = find(tmp.begin(),tmp.end(),1);
        if (itr == tmp.end()){
            counter++;
        }
    }
    return counter;
}

int zeroCols(vector<vector<int>> matrix,int n, int m){
    int counter = 0;
    for (int i = 0 ; i < m ; ++i){
        bool hasOne = false;
        for (int j = 0 ; j < n; ++j){
            if (matrix[j][i] == 1){
                hasOne = true;
            }
        }
        if (!hasOne){
            counter++;
        }
    }
    return counter;
}



int main(){
    vector<vector<int>> matrix;

    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        matrix.clear();
        for (int i = 0 ; i < n ;++i){
            vector<int> tmp;
            tmp.clear();
            for (int j = 0 ; j < m ; ++j){
                int x;
                cin >> x;
                
                tmp.push_back(x);
            }
            matrix.push_back(tmp);
        }
       
        int a = zeroRow(matrix,n,m);
        int b = zeroCols(matrix,n,m);

        if (min(a,b) % 2 == 0){
            cout << "Vivek" << "\n";
        }
        else if (min(a,b) % 2 == 1) {
            cout << "Ashish" << "\n";
        }
        

    }
        
}

