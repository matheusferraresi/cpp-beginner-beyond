#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) 
        cout << i << endl;
        cout << "Test"; // Testing misleading indentation warning
    
    return 0;
}