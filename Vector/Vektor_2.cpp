#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> inventory;

    inventory.push_back("sword");
    inventory.push_back("shield");
    inventory.push_back("potion");

    cout << "Inventory Items\n";
    for (const string& item : inventory) {
        cout << "- " << item << endl;
    }

    inventory.pop_back(); // player drinks pootion 

    cout << "\nAfter using the potion:\n";
    for(const string& item : inventory) {
        cout << "- " << item << endl;
    }


}