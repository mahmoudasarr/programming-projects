# Bank ATM Simulator (C++)

A simple console-based ATM simulator built in C++.

## Features

- 🔐 Password authentication before accessing the menu
- 💰 Check account balance
- 💵 Deposit money (with a daily limit of 10,000)
- 🏧 Withdraw money (with balance validation)
- 🔁 Menu keeps repeating until the user chooses to exit

## How It Works

1. The program displays a menu with 4 options.
2. The user enters their password once at the start.
3. If the password is correct, the user can repeatedly:
   - View their balance
   - Deposit funds
   - Withdraw funds
   - Exit the program
4. If the password is incorrect, the program exits automatically.

## Menu Options

```
1. Show Balance
2. Deposit
3. Withdraw
4. Exit
```

## Example Run

```
***Welcome to Bank ATM***

Please select from options:
1. Show Balance
2. Deposit
3. Withdraw
4. Exit
Enter your password:
123456
Enter your choise: 2
Enter the amount
500
Your balance now is: 5500
```

## Built With

- C++
- Standard I/O (`iostream`)

## Planned Features

- [ ] Retry option when the wrong password is entered
- [ ] Change password functionality
- [ ] Transaction history log
- [ ] Input validation for non-numeric input

## Status

🚧 Work in progress — more features coming soon.