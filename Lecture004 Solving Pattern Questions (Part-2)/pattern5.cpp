#include<iostream>
using namespace std;
/*
8
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
6 5 4 3 2 1 
7 6 5 4 3 2 1 
8 7 6 5 4 3 2 1 
*/
int main() {
    int n;
    cin>>n;

    int i = 1;
    
    while(i <= n) {

        int j = 1;
        while(j <= i) {
            cout<<(i-j+1)<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}
