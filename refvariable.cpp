#include <iostream>
using namespace std;
int main(){
int i = 5;
int & j = i;
cout << i << endl;

i++;
cout << j << endl;
return 0 ; 
}