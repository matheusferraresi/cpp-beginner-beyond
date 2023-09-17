#include <iostream>

using namespace std;

int main() {
    double num1{}, num2{};
    
    cout << boolalpha;
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    // Testing with doubles 10.0 and 9.999999999
    // First conparison shows 10 > 10 = true; second comparison shows 10 >= 10 = true    
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
    
    return 0;
}