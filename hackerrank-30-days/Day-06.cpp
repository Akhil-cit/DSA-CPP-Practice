#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string x,y,z;
    int xy;
    cin >> xy;

while (xy--) {
    cin >> x;
    y = "";
    z = "";

    for (int i = 0; i < x.length(); i++) {
        if (i % 2 == 0)
            y += x[i];
        else
            z += x[i];
    }

    cout << y << " " << z << endl;
}

}
