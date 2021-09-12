#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main()
{    int N, i, zero=0;

    cout << " Input numb of elements in N <" << endl;
    cin >> N;
     vector<int> A;
     A.resize(N);

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
