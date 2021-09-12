#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{    int N, i, zero=0;
    double A[100];
    cout << " Input numb of elements in N <" << endl;
    cin >> N;

     srand(time(NULL));
       for (i = 0; i < N; i++) {
           A[i] = (rand() % 21) - 10;
       }

    cout << endl;
     for (i = 0; i < N; i++) {
             cout << "A[" << A[i] << "]" << endl;
         }

         cout << endl;

    for (i = 0;i<N ;i++ ) {
        if(A[i]==0) zero++;

    }
    cout <<"zero = " << zero;
    _getch();

    return 0;
}

