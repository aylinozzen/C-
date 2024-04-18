#include <iostream>
using namespace std;

int main() {
    string userName = "WalWia";
    string userName_2;
    string password = "220623Ay.";
    string password_2;

    cout << "Please enter your username:" << endl;
    cin >> userName_2;

    cout << "Please enter your password:" << endl;
    cin >> password_2;

    if (userName != userName_2 || password != password_2)
    {
        if (userName != userName_2 && password != password_2)
        {
            cout << "Both of the information you entered are incorrect. Please try again." << endl;
        }
        else if (password != password_2)
        {
            cout << "You entered an incorrect password.Please try again." << endl;
        }
        else if (userName != userName_2) {
            cout << "You entered an incorrect username.Please try again.";
        }
    }
    else {
            cout << "Login successful." << endl;

    }

    return 0;
}
