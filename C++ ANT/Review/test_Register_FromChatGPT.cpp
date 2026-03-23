#include <iostream>
#include <string>
using namespace std;

// Structure to hold user registration information
struct User {
    string username;
    string password;
};

// Function to register a user
void registerUser(User& user) {
    cout << "Enter username: ";
    getline(cin, user.username);  // Use getline to allow spaces in username
    cout << "Enter password: ";
    getline(cin, user.password);  // Use getline to allow spaces in password
}

// Function to display the registered user's information
void displayUser(const User& user) {
    cout << "\nRegistration Successful!" << endl;
    cout << "Username: " << user.username << endl;
    cout << "Password: " << user.password << endl;  // In a real system, don't display the password!
}

int main() {
    User newUser;

    // Call the registerUser function to get user details
    registerUser(newUser);

    // Display the registered user information
    displayUser(newUser);

    return 0;
}
