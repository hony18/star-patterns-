#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int m, n;
    cin >> m;
    cin >> n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(j > m-i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }

        cout << endl;
    }
	return 0;
}
