// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

// Function prototypes
void display_menu();
char get_user_input();

// Menu handling prototypes
void handle_print(const vector<int> &numbers);

// List prototypes

int main() {
    char selection {};
    vector<int> numbers {};
    int number {};

    do {
        display_menu();

        // get user input, make it lower case and assign it to selection
        selection = get_user_input();

        switch (selection) {
            case 'P':
                handle_print(numbers);

                break;
            case 'A':
                cout << "You selected A" << endl;
                cout << "Please enter a number: ";
                cin >> number;
                numbers.push_back(number);

                cout << "Number " << number << " added" << endl;

                break;
            case 'M':
                cout << "You selected M" << endl;

                if (numbers.empty() ) {
                    cout << "Unable to calculate the mean - no data" << endl;
                    break;
                } else {
                    int total {};

                    for (int item : numbers) {
                        total += item;
                    }

                    cout << "The mean is: " << static_cast<double>(total) / numbers.size() << endl;
                }
                break;
            case 'S':
                cout << "You selected S" << endl;

                if (numbers.empty() ) {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                    break;
                } else {
                    int smallest {numbers.at(0)};

                    for (int item : numbers) {
                        if (item < smallest) {
                            smallest = item;
                        }
                    }

                    cout << "The smallest number is: " << smallest << endl;
                }

                break;
            case 'L':
                cout << "You selected L" << endl;

                if (numbers.empty() ) {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                    break;
                } else {
                    int largest {numbers.at(0)};

                    for (int item : numbers) {
                        if (item > largest) {
                            largest = item;
                        }
                    }

                    cout << "The largest number is: " << largest << endl;
                }

                break;
            case 'Q':
                cout << "Goodbye..." << endl;
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
        }

    } while (selection != 'Q');

    cout  << endl;
    return 0;
}

//Functions

void display_menu() {
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char get_user_input() {
    char selection {};
    cin >> selection;
    selection = toupper(selection);
    
    return selection;
}

void handle_print(const vector<int> &numbers) {
    string print{};
    cout << "Printing all numbers: " << endl;

    if (numbers.empty() ) {
        cout << "[] - the list is empty" << endl;
    } else {
        print = "[ ";

        for (int item : numbers) {
            print += to_string(item) + " ";
        }

        print += "]";

        cout << print << endl;
    }
}