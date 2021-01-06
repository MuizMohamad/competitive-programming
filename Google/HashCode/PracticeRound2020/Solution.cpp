#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <fstream>

int main(){
    int max;
    int pizzaTypes;
    std::vector<int> pizzas;
    std::vector<int> inputL1;
    std::vector<int> inputL2;
    std::string indivStr;

    // input
    std::ifstream inputFile;
    inputFile.open( "C:/Users/muiz_/Documents/PROGRAMMING/C++/HashCode/PracticeRound2020/e_also_big.in" , std::ios_base::in);
    inputFile >> max >> pizzaTypes;
    
    for (int i = 0 ; i < pizzaTypes ; i++){
        int sliceNum;
        inputFile >> sliceNum;
        pizzas.push_back(sliceNum);
    }

    // solvings
    
    std::vector<int> chosenP;

    int sum = 0;
    for (int i = pizzas.size()-1 ; i >= 0 ; i--){
        sum += pizzas.at(i);
        if (sum < max){
            chosenP.push_back(i);
        }
        else {
            sum -= pizzas.at(i);
        }
    }

    // outputs
    std::ofstream outputFile;
    outputFile.open("C:/Users/muiz_/Documents/PROGRAMMING/C++/HashCode/PracticeRound2020/e_also_big.out",std::ios_base::out);
    
    outputFile << chosenP.size() << std::endl;
    sort(chosenP.begin(),chosenP.end());
    for (auto x : chosenP){
        outputFile << x << ' ';
    }

}