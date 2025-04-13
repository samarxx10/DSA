using namespace std;
#include <iostream>

int main(){
    char sentence[1000];
    char temp = cin.get();

    int len = 1;
    while(temp!='\n'){
        len++;

        cout << temp;

        temp = cin.get();
    }

    cout << "Length" << len << endl;

    return 0;
}