#include<bits/stdc++.h>
using namespace std;

/* PATTERN 1
1234
1234
1234
1234
*/
void pattern_1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 1;j<=n; j++){
            cout << j << " "; // for reverse use n-j+1
        }
        cout<< endl;
    }

}

int main(){

    // pattern 1
    pattern_1(6);
}