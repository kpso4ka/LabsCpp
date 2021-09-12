#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{    int  i, zero=0;
     int *A;
     A = (int*)malloc(i * sizeof(int));
    ifstream f("C:/Users/kps/Desktop/LAB1/1.txt");
     if (!f.is_open()) {
            cout << "Error!" << endl;
            return 1;}
        else {
    for (i = 0;i<5 ;i++ ) {
         f >> A[i];
         cout << "A[" << i << "] = "<< A[i] << endl;

      }
     }

    cout << endl;

    for (i = 0;i<5 ;i++ ) {
        if(A[i]==0) zero++;
    }
    cout <<"zero = " << zero;
    _getch();
    free(A);
    return 0;
}
