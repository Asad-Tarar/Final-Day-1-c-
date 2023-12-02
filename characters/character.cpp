#include <iostream>

using namespace std;

int main() {
    const int maxNameLength = 50;  // Maximum length for the names
    char firstName[maxNameLength], lastName[maxNameLength];

    // Input for the first name
    cout << "Enter the first name: ";
    cin >> firstName;

    // Input for the last name
    cout << "Enter the last name: ";
    cin >> lastName;

    // Display the full name (Tarar)
    cout << "Full name: " << firstName << " " << lastName << endl;

    return 0;
}
