





#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    
    cout<<"Enter the number of Cases:"<<endl;
    cin >> T;
    
    for (int i = 1; i <= T; i++) {

        int a, b, c, x;
        cout<<"Enter the required by A,B,C respctively"<<endl;
        cin >> a >> b >> c;
        
        if (a > c) {
            x = a;
        } else {
            x = c;
        }
        {   int i;
                i=x;
          
            if (i < b) {
                cout << "Yes Temperature can be adjusted" << endl;
            } else if(i > b){
                cout << "No Temperature can't be adjusted" << endl;
            }else if(i=b){
                cout<<"Yes Temperature can be adjusted"<<endl;
            }
        }
    }

}
