#include <iostream>

using namespace std;

int n,m;

int recurse(int k, int count){
    if (k == m) return count;
    int multFirst = recurse(2*k,count+1);
    int subFirst = -1;

    if (k < m){
        subFirst = recurse(k-1,count+1);
    }


}

int main(){
  
    cin >> n >> m;
    /*
    if (n >= m){
        cout << n-m ;
    }

    else {
        
        int k = n;
        int count = 0;
        while (k <= m){
            count++;
            k *= 2;
        }

        int curMin = (count)+(k-m);
      
        k/=2;
        count--;
        
        int limit = m/2;

        for (int i = 1 ; count+i+1 < curMin ; i++){
            int test = k;
            if ((test-i)*2 == m) curMin = count+i+1;
        }

        cout << curMin;
        

       
    }
    */
    int count = 0;
    while (n != m){
        if (m < n){
            count += n-m;
            break;
        }
        else {
            if (m % 2 == 0){
                m/=2;
            }
            else {
                m++;
            }
            count++;
        }
    }
    cout << count;
    

    

}