#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;

    int a[N]; // Declaring an array of size N

    // Input integers into the array
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Print integers in reverse order
    for (int j = N - 1; j >= 0; j--) {
        cout << a[j] << " ";
    }

    return 0;
}
