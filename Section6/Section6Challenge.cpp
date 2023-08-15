#include <iostream>

using namespace std;

int main()
{
    const double small_room_price{25};
    const double large_room_price{35};
    const double tax_rate{0.06};
    const int days_to_expire{30};
    int small_room_quantity{0};
    int large_room_quantity{0};

    cout << "Hello, welcome to Best Carpet Cleaning Service\n"
         << endl;

    cout << "How many small rooms would you like cleaned?" << endl;
    cin >> small_room_quantity;

    cout << "How many large rooms would you like cleaned?" << endl;
    cin >> large_room_quantity;

    cout << "==============================" << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_room_quantity << endl;
    cout << "Number of large rooms: " << large_room_quantity << endl;

    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;

    double cost = (small_room_price * small_room_quantity) + (large_room_price * large_room_quantity);
    double tax = cost * tax_rate;
    double total = cost + tax;

    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "==============================" << endl;
    cout << "Total estimate: $" << total << endl;
    cout << "This estimate is valid for " << days_to_expire << " days" << endl;
}