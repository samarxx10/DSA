#include <iostream>
using namespace std;
void doublevalue( int *p ){
    *p = *p * 2;
}
int main(){
    int x;
    cin >> x;

    int *ptr = &x;
    doublevalue(ptr);
    cout << x << endl;
    return 0;
}
