#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };
    cout << "Matrix is:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;  
    }
    int r=0;
    int i,j;
    for (i = 0; i < 3; i++){
    
    		r=a[i][i]+r;

	}
 		cout<<r<<endl;
    return 0;
}

