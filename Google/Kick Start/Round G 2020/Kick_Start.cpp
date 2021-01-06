#include <iostream>
#include <string>

using namespace std;
const string kick = "KICK";
const string start = "START";

int n;
string s;

int main(){
    
    cin >> n ;
    for (int i = 1 ; i <= n ; i++){

        cin >> s;

        int indexStr = 0;
        int index_kick = 0;
        int index_start = 0;
        int count = 0;
        int findStartIndex = 0;

        while(indexStr < s.length()){

            while(index_kick != 4 && indexStr < s.length()){
                if (s[indexStr] == kick[index_kick]) index_kick++;
                indexStr++;
            }

            findStartIndex = indexStr;

            if (index_kick == 4) {
                while (findStartIndex < s.length()){
                    while(index_start != 5 && findStartIndex < s.length()){
                        if (s[findStartIndex] == start[index_start]){
                            index_start++;   
                        } 
                        findStartIndex++;
                    }

                    if (index_start == 5) {
                        count++;
                        index_start = 0;
                    }
                }
                index_kick = 0;
                indexStr--;
            }
                     
        }
        

        cout << "Case #" << i << ": " << count << "\n";  
    }
       
        
    
}