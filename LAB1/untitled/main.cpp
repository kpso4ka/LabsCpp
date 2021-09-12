#include <iostream>

using namespace std;

int main()

{
    int A[100],B[100], j=0,n;

    cout << "N= "  ;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "A[i]=";
        cin >> A[i];
    }
     for(int i=0; i<n; i++){
        if (A[i]>10) {

            B[j]=A[i];
            cout << B[j];
            j++;
           }
     }



    return 0;




}
