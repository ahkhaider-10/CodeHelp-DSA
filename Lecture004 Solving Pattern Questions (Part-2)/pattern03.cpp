#include<iostream>
using namespace std;
/*
6
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/
int main() {
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << row << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}
