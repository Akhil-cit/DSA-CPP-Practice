#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, string> phonebook;
    string name, number;

    // Store entries
    for (int i = 0; i < n; i++) {
        cin >> name >> number;
        phonebook[name] = number;
    }

    // Read queries until input ends
    while (cin >> name) {
        if (phonebook.count(name)) {
            cout << name << "=" << phonebook[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
