#include <iostream>
#include <conio.h>
using namespace std;

int main()
{    int N, i, zero=0;
    int *A = new int[N];
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
    delete[] A;
    return 0;
}
