#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

class Book{
    public:
        int id;
        int score;

        Book(int id , int score){
            this->id = id;
            this->score = score;
        }
        Book(std::vector<Book> bS,int id){
            this->id = id;
            for (auto b: bS){
                if (id == getBId(b)){
                    this->score = getScore(b);
                    break;
                }
            }

        }

        int getBId(){
            return id;
        }

        int getBId(Book& b){
            return b.id;
        }

        int getScore(Book& b){
            return b.score;
        }

        bool operator <(Book& b){
            if (this->score < b.score){
                return true;
            }
            else {
                return false;
            }
        }

};

class Library {
    public:
        std::vector<Book> booksIn;
        // std::vector<Book> sentBooks;
        int signUpTime;
        int maxScan;
        int id;
        int currentDay = 0;

        Library(int id,std::vector<Book> booksIn , int signUpTime , int maxScan , int dayN){
            this->booksIn = booksIn;
            this->signUpTime = signUpTime;
            this->maxScan = maxScan;
            this->id = id;
            std::sort(booksIn.begin(),booksIn.end());
        }

        int getSignUpTime(Library& L){
            return L.signUpTime;
        }
         int getSignUpTime(){
            return signUpTime;
        }

        void assignCurrentDay(int currentDay){
            this->currentDay = currentDay;
        }

        bool operator <(Library& b){
            if (this->signUpTime < b.signUpTime){
                return true;
            }
            else {
                return false;
            }
        }

        int getLId(){
            return id;
        }

        std::vector<Book> returnBookList(int dayN){
            
            std::vector<Book> booksOut;
            int counterDay = 0;
            int counterScan = 0;
            int counterBook = booksIn.size()-1;
            int sendingDays = dayN-currentDay;
            

            while( counterDay <= sendingDays && counterBook > 0 ){
                booksOut.push_back(booksIn.at(counterBook));
                counterBook -= 1;
                counterScan += 1;
                if (counterScan == maxScan){
                    counterDay += 1;
                }
            }

            return booksOut;

        } 

        

};




int main(){

    // input
    std::vector<Library> allLibrary;
    // std::vector<int> booksID;
    std::vector<Book> allBooks;
    std::ifstream inputFile;
    inputFile.open("C:/Users/muiz_/Documents/PROGRAMMING/C++/HashCode/OnlineQuals/d_tough_choices.txt",std::ios_base::in);
    int bookN, libraryN , dayN , id , score ;
    
    // first line
    inputFile >> bookN >> libraryN >> dayN ;
    // second line
    for ( id = 0 ; id < bookN ; id++){
        inputFile >> score ;
        Book tempB(id,score);
        allBooks.push_back(tempB);
    }
    
    // library lines ++
    
    std::vector<Book> booksInLib;
    int booksNum , signUplength, scanNum;
    int tempId;
    for (int j = 0 ; j < libraryN ; j++){
        booksInLib.clear();
        inputFile >> booksNum >> signUplength >> scanNum;
        for (int k = 0 ; k < booksNum ; k++){
            
            inputFile >> tempId;
            Book tempBook(allBooks,tempId);
            booksInLib.push_back(tempBook);
        }
        Library tempL(j,booksInLib,signUplength,scanNum,dayN);
        allLibrary.push_back(tempL);
    }
    
    std::ofstream outputFile;
    outputFile.open("C:/Users/muiz_/Documents/PROGRAMMING/C++/HashCode/OnlineQuals/d_tough_choices_out.txt",std::ios_base::out);
    // actual solution
    
    std::vector<Library> sentLib;
    std::sort(allLibrary.begin(),allLibrary.end());
    int curDay = 0;
    int i = 0;
    
    
    while (curDay <= dayN && i < allLibrary.size()){
        
        Library tempLib = allLibrary.at(i);
        sentLib.push_back(tempLib);
        (tempLib).assignCurrentDay(curDay);
        i++;
        curDay += tempLib.getSignUpTime();
         

    }
    
    // std::vector<Library> scanLibOrder;
    
    // output blyat
    
    
    outputFile << sentLib.size() << "\n";
    
    for(int m = 0 ; m < sentLib.size() ; m++ ){
        std::vector<Book> tempSent = (sentLib.at(m)).returnBookList(dayN);
        outputFile << (sentLib.at(m)).getLId() << " "  << tempSent.size() << "\n";
        
        for (int b = 0 ; b < tempSent.size() ; b++ ){
            outputFile << tempSent[b].getBId() << " ";
        }
        
        
        outputFile << "\n";
    }
    
    outputFile.close();
    inputFile.close();
    
    
}