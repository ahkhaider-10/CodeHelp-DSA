#include<iostream>
using namespace std;
/*
7
      1
     121
    12321
   1234321
  123454321
 12345654321
1234567654321
*/
int main() {

    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {

        //Print karo space (1st triangle)
        int space = n - row ;
        while(space) {
            cout<<" ";
            space = space -1;
        }

        //print 2nd triangle 
        int j = 1;
        while(j <= row ) {
            cout<<j;
            j = j + 1;
        }

        //print 3rd triangle

        int start = row - 1;
        while(start) {
            cout<<start;
            start = start - 1;
        }

        cout<<endl;
        row = row + 1;
    }
    return 0;
}
