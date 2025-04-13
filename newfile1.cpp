#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[] ={'a','b','c','d','e','f','\0'};

    cout << a << endl;

    char b[100];
    cin>>b;

    cout << b << endl;

    cout << strlen(a) << endl;
    cout << sizeof(a) << endl;

    return 0;
}