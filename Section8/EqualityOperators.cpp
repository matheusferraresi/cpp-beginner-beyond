#include <iostream>

using namespace std;

int main () {
    
    double double1{}, double2{};
    bool equal_result {};
    bool not_equal_result {};
    
    cout << boolalpha;
    // 10.00 == 9.99999999999 cam be true    
    cout << "Enter two doubles separated by a space: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
    return 0;
}