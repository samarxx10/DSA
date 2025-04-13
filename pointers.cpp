#include <iostream>
using namespace std;
int main(){

    int arr[10] = {1,2,3};
    cout << " address  is :" << arr << endl;
    cout << " value   is :" << *arr << endl;
    cout << " value   is :" << *( arr + 1 ) << endl;

    return 0;
}