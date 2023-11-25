#include<iostream>
using namespace std;
/*
6
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21
*/
int main() {
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}

