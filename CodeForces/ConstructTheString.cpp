#include <iostream>

int main(){
    int t;
    std::cin >> t;
    

    for (int i = 0; i < t ; ++i){
        int n,a,b;

        std::cin >> n >> a >> b;

        int length = 0;
        int subL = a;
        int disL = 0;
        int k = 0;
        int j = 0;
        std::string str;
        
        while (length < n){
            if (subL == 0 && disL == b ){
                str += str.at(j);
                j++;
                subL += 1;
            }
            else if (disL < b){
                str += (char) ('a' + k) ;
                k++;
                disL++;
            }
            else {
                str+= 'a';
            }
            
            subL--;
            length++;
            

        }
        std::cout << str << std::endl;

    }
}