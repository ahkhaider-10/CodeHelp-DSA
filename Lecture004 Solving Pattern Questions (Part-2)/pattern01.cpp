#include<iostream>
using namespace std;
/*
input: 6
output:
6 
6 5 
6 5 4 
6 5 4 3 
6 5 4 3 2 
6 5 4 3 2 1 
*/
int main() {
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << n - col + 1 << " ";
            col++;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}
