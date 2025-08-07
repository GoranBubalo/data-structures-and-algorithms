#include <iostream>
using namespace std;

void reverseString(string &str, int i) {
    if(i == str.length()) return;
    reverseString(str, i + 1);
    cout << str[i];
    return;
}

int main() {
    string name = "Goran"; 
    reverseString(name, 0);
    cout << endl;
    return 0;
}