#include <iostream>
using namespace std;

int main() {
	// your code goes here
    // rows = m; cols = 2*m-1
    //  1    *            
    //  2   * *         
    //  3  * * *      
    //  4 * * * *  
    //  5* * * * *
    int m, n;
    cin >> m;
    n = 2*m - 1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(j > m-i and j < m+i){
                cout << "* ";
                j++;
            }
            else{
                cout << " ";
            }
        }

        cout << endl;
    }
	return 0;
}
