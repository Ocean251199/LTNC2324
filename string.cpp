#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    string c = a+b;
    char x = b[0];
    b[0] = a[0];
    a[0] = x;
    cout<<c<<endl;
    cout<<a<<" "<<b;
    return 0;
}
