#include <iostream>
using namespace std;

// Defining Macro variables: redefining true as false!
#define true false

int main() {
    bool found = true; // you declare it true here, fine

    // but in question we defined true as false, so it will print 0 (false)
    cout << found << endl;

    return 0;
}
