





#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {

        int a, b, c, x;
        cin >> a >> b >> c;
        if (a > c) {
            x = a;
        } else {
            x = c;
        }
        {   int i;
                i=x;
          
            if (i < b) {
                cout << "Yes" << endl;
            } else if(i > b){
                cout << "No" << endl;
            }else if(i=b){
                cout<<"Yes"<<endl;
            }
        }
    }

}