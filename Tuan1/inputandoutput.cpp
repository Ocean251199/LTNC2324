#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int sum = 0;
    int input;
    for (int i = 0; i < 3;i++)
    {
        cin>>input;
        sum += input;
    }
    cout<<sum;
    return 0;
}
