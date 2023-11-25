#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using namespace std;
string login;
string password;
int wybor;

int main()
{
    cout << "Welcome in the ING" << endl;
    cout << "Please enter your login and password" << endl;

    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;

    if (login == "szywoj" && password == "qwerty")
    {
        cout << "Welcome, please wait a moment" << endl;
        Sleep(5000);
        cout << "-----------------------------" << endl;
        cout << "START" << endl;
        cout << "Choose your option: " << endl;
        cout << "1. Transactions" << endl;
        cout << "2. History" << endl;
        cout << "3. Settings" << endl;

        cin >> wybor;

        switch (wybor)
        {
        case 1:
            cout << "There is a list of your transactions" << endl; //add text file to the project with transactions, you will be able to show history of payments//
            break;
        }





    }
    else {
        cout << "Login or password is incorrect, try again" << endl;
    }
    exit(0);


    return 0;
}