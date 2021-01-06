#include <iostream>

int main(){
    std::string lyrics;
    std::cin >> lyrics;

    std::string oldLyrics = "";
    std::string words = "";

    int i = 0;
    while (i < lyrics.length()){
        
        if (i == lyrics.length() - 1){
            words += lyrics.at(i);
            oldLyrics += words ;
            i++;             
        }
        else if (lyrics.at(i) == 'W' && i != lyrics.length() - 2){
            if (lyrics.at(i+1) == 'U' && lyrics.at(i+2) == 'B'){
                i += 3;
                if (words != ""){
                    oldLyrics += words + " " ;
                    words = "";
                }
                
            }
            else {
                words += lyrics.at(i);
                i++;
                
            }
        }
        else {
            words += lyrics.at(i);
            i++;
        }

    }
    std::cout << oldLyrics;
        
        
        
    
}