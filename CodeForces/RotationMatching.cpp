#include <iostream>
#include <vector>

using namespace std;
const int N = 2e5 + 5;
vector<int> a;
vector<int> b;
int n;
/*
int checkPair(int k){
    int count = 0;
    for(int i = 0 ; i < n ; ++i){
        if (i + k < n)  count += (b[i] == a[i+k]);
        else count += (b[i] == a[(i+k)-n]);
    }
    return count;
}
*/

int main(){
   
    cin >> n;

    int shift[N];
    int posElemA[N];
    for (int i = 0 ; i < n ; ++i){
        shift[i] = 0;
    }

    for(int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        posElemA[tmp] = i;
        a.push_back(tmp);
    }

    for(int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    
    for (int i = 0 ; i < n ; ++i){
        int sh = posElemA[b[i]] - i;
        if (sh < 0) sh += n;
        shift[sh]++;
    }

    int ans = 0;
    for (int k = 0 ; k < n  ; k++){
        ans = max(ans,shift[k]);
    }

    cout << ans;

}