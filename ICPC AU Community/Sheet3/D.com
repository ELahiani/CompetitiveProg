#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *A = new int[n];

//loop to read integers into the array A and prints the index and value of elements that are less than or equal to 10
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] <= 10)
        {
            cout << "A[" << i << "]"
                 << " = " << A[i] << endl;
        }
     }
}
