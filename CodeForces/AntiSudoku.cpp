#include <iostream>
#include <vector>
#include <string>

using namespace std;
char changeElem(char test){
    
    if (test == '9'){
        return '1';
    }
    else {
        return test+1;
    }
}
int main(){
    int t;
    cin >> t;
  
    while (t--){
        vector<string> sudoku = {};
        for (int i = 0 ; i < 9 ; ++i){
            string tmp;
            cin >> tmp;
            sudoku.push_back(tmp);
        }

        sudoku[0][0] = changeElem(sudoku[0][0]);
        sudoku[1][3] = changeElem(sudoku[1][3]);
        sudoku[2][6] = changeElem(sudoku[2][6]);
        sudoku[3][1] = changeElem(sudoku[3][1]);
        sudoku[4][4] = changeElem(sudoku[4][4]);
        sudoku[5][7] = changeElem(sudoku[5][7]);
        sudoku[6][2] = changeElem(sudoku[6][2]);
        sudoku[7][5] = changeElem(sudoku[7][5]);
        sudoku[8][8] = changeElem(sudoku[8][8]);


        for (auto x : sudoku){
            cout << x << "\n";
        }
    }
}