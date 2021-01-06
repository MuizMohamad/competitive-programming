#include <iostream>
#include <algorithm>
#include <vector>

int voidA(int hp){
    return (hp/2) + 10;
}

int light(int hp){
    return hp-10;
}

int main(){
    int t;
    int hp,n,m;

    std::cin >> t;
    std::vector<int> result;
    for (int i = 0 ; i < t ; ++i){
        std::cin >> hp >> n >> m;
        while(hp > 0){
            if (n > 0 ){
                int hp1 = voidA(hp);
                //int hp2 = light(hp);
                if (hp1 >= hp){
                    n = 0;
                }
                else {
                    hp = hp1;
                    n--;
                }
                
                
            }
            else if (n == 0 && m > 0){
                int hp1 = light(hp);
                hp = hp1;
                m--;
            }
            else {  
                break;
            }


        }
        if (hp <= 0){
            result.push_back(1);
        }
        else {
            result.push_back(0);
        }
    }

    for (auto x : result){
        if ( x == 1){
            std::cout << "YES" << std::endl ;
        }
        else {
            std::cout << "NO" << std::endl ;
        }
        
    } 
}