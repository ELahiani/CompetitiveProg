#include <iostream>
using namespace std;

int main() {
    int n, min, index;

    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0 || arr[i] < min) {
            min = arr[i];
            index = i + 1; 
        }
    }

    cout << min << " " << index << endl;

}

