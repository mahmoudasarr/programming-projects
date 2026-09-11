#include <iostream>

// Global variables
double PIN = 123456;   // stored PIN
double balance = 5000; // account balance
int deposit = 0;
int withdraw = 0;
int choise = 0;
int newPIN = 0;

// Shows the ATM menu
void showMenu()
{
    std::cout << "***Welcome to Bank ATM***" << '\n';
    std::cout << "\nPlease select from options: " << '\n';
    std::cout << "1. Show Balance" << '\n';
    std::cout << "2. Deposit" << '\n';
    std::cout << "3. Withdraw" << '\n';
    std::cout << "4. Change PIN" << '\n';
    std::cout << "5. Exit" << '\n';
}

// Checks PIN and runs the selected option
void process()
{
    if (PIN == 123456)
    {
        std::cout << "Enter you'r choise: ";
        std::cin >> choise;

        switch (choise)
        {
        case 1:
            // show balance
            std::cout << "You'r balance is: " << balance << '\n';
            break;

        case 2:
            // deposit, max 10000 per day
            std::cout << "Enter the amount" << '\n';
            std::cin >> deposit;
            if (deposit <= 10000)
            {
                balance = balance + deposit;
                std::cout << "Your balance now is: " << balance << '\n';
            }
            else
            {
                std::cout << "You have a limit of 10000 per day! Try again." << '\n';
            }
            break;

        case 3:
            // withdraw, can't exceed balance
            std::cout << "Enter the : " << '\n';
            std::cin >> withdraw;
            if (withdraw <= balance)
            {
                balance = balance - withdraw;
                std::cout << "Your balance now is: " << balance << '\n';
            }
            else
            {
                std::cout << "Wrong value!, must be less or equal: " << balance << '\n';
            }
            break;

        case 4:
        {
            std::cout << "Enter the new PIN with 6 numbers: " << '\n';
            std::cin >> newPIN;

            if (newPIN >= 100000 && newPIN <= 999999)
            {
                PIN = newPIN;
                std::cout << "PIN changed successfully." << '\n';
            }
            else
            {
                std::cout << "Invalid PIN! Must be exactly 6 digits." << '\n';
            }
            break;
        }

        case 5:
            std::cout << "Thank you" << '\n';
            break;

        default:
            std::cout << "Invalid choice, try again." << '\n';
            break;
        }
    }
    else
    {
        // wrong PIN, force exit
        std::cout << "Wrong PIN!, try again." << '\n';
        choise = 5;
    }
}

int main()
{
    showMenu();

    std::cout << "Enter your PIN: ";
    std::cin >> PIN;

    // keep showing menu until user exits
    do
    {
        process();
    } while (choise != 5);

    return 0;
}