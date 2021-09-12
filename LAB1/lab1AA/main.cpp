#include <iostream>
#include <conio.h>
using namespace std;

int main()
{    int N, i, zero=0;
    double A[100];
    cout << " Input numb of elements in N <" << endl;
    cin >> N;

    for (i = 0;i<N ;i++ ) {
          cout << "A[" << i << "] = ";
          cin >> A[i];
      }

    cout << endl;

    for (i = 0;i<N ;i++ ) {
        if(A[i]==0) zero++;
    }
    cout <<"zero = " << zero;
    _getch();

    return 0;
}
