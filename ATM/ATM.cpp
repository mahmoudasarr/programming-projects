#include <iostream>

// Variables
double password = 123456;
double balance = 5000;
int deposit = 0;
int withdraw = 0;
int choise = 0;

// Display the menu of ATM.
void showMenu()
{
    std::cout << "***Welcome to Bank ATM***" << '\n';
    std::cout << "\nPlease select from options: " << '\n';
    std::cout << "1. Show Balance" << '\n';
    std::cout << "2. Deposit" << '\n';
    std::cout << "3. Withdraw" << '\n';
    // std::cout << "4. Change Password" << '\n';
    std::cout << "4. Exit" << '\n';
}

void process()
{

    if (password == 123456)
    {
        std::cout << "Enter your choise: ";
        std::cin >> choise;

        switch (choise)
        {
        case 1:
            std::cout << "You'r balance is: " << balance << '\n';
            break;

        case 2:
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
            std::cout << "Enter the amount: " << '\n';
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
            std::cout << "Thank you" << '\n';
            break;

        default:
            std::cout << "Invalid choice, try again.";
            break;
        }
    }
    else
    {
        std::cout << "Wrong password!, try again." << '\n';
        choise = 4;
    }
}

int main()
{
    showMenu();
    std::cout << "Enter your password: " << '\n';
    std::cin >> password;
    do
    {
        process();
    } while (choise != 4);

    return 0;
}