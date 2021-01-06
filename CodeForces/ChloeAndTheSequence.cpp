#include <iostream>
#include <vector>
#include <string>

using namespace std;

int findElem(long long size,long long k,int n){
    
    if (k == size/2){
        return n;
    }
    else if (k == 1 && size == 1){
        return 1;
    }  
    else {
        if (k > size/2){
            k -= size/2 + 1;
        }
        return findElem((size-1)/2 , k , n-1);
    }

}

int main(){
    int n;
    long long k;
    cin >> n >> k;
    long long size = 0;
    int copyN = n;

    while (n--){
        size = 2*size + 1;
    }
    
    cout << findElem(size,k-1,copyN);
}