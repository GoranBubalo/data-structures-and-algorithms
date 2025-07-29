#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vektor sadrži: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    numbers.pop_back(); // Briše 30

    cout << "\nNakon brisanja zadnjeg: ";
    for (int n : numbers) { // range-based petlja
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
