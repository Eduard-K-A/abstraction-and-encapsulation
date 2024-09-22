#include <iostream>
#include <limits> 

using namespace std;

void subMenu() //displays sub menu
{
    cout << "Sub Menu" << endl;
    cout << "1 - Deposit" << endl;
    cout << "2 - Withdraw" << endl;
    cout << "3 - Check Balance" << endl;
    cout << "4 - Back" << endl;
}

class BankAccount // abstraction class
{
protected:
    double balance;

public:
    virtual void bankBalance() = 0;

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Successfully deposited " << amount << " PHP!" << endl;
        }
        else
        {
            cout << "Cannot deposit 0 or negative value. Please try again!" << endl;
        }
    }

    virtual void withdraw(double amount) = 0;

    virtual double displayBalance() const = 0;
};

class SavingsAccount : public BankAccount // for savings account
{
public:
    SavingsAccount(double startingBalance)
    {
        balance = startingBalance;
    }

    void withdraw(double amount) override //overrides virtual void withdraw from class BankAccount
    {
        if (amount >= balance)
        {
            cout << "Cannot withdraw amount greater than your balance. Please try again." << endl;
        }
        else if (amount < 0)
        {
            cout << "Cannot withdraw a negative amount. Please try again." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Successfully withdrawn " << amount << " PHP!" << endl;
        }
    }

    double displayBalance() const override
    {
        return balance;
    }

    void bankBalance() override{
        cout << "Savings account balance: " << balance << " PHP" << endl;
    }
};

class CurrentAccount : public BankAccount //for Current Account
{
public:
    CurrentAccount(double initialBalance)
    {
        balance = initialBalance;
    }

    void withdraw(double amount) override
    {
        if (amount >= balance)
        {
            cout << "Cannot withdraw amount greater than your balance. Please try again." << endl;
        }
        else if (amount < 0)
        {
            cout << "Cannot withdraw a negative amount. Please try again." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Successfully withdrawn " << amount << " PHP!" << endl;
        }
    }

    double displayBalance() const override
    {
        return balance;
    }

    void bankBalance() override
    {
        cout << "Current account balance: " << balance << " PHP" << endl;
    }
};

// Function to handle numeric input validation
template <typename T>
T getValidInput(const string& prompt)
{
    T input;
    while (true)
    {
        cout << prompt;
        cin >> input;

        
        if (cin.fail())
        {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            return input;
        }
    }
}

int main()
{
    int choice = 0;
    bool repeat = true;
    SavingsAccount userSavings(1000); //initialized balance to 1000
    CurrentAccount userCurrent(0);
    double amount = 0;

    do
    {
        cout << "Main Menu" << endl;
        cout << "1 - Savings Account" << endl;
        cout << "2 - Current Account" << endl;
        cout << "3 - Exit" << endl;
        choice = getValidInput<int>("Enter the number: "); //only accepts a number
        cout << "--------------------------------------------" << endl;

        int subChoice_1 = 0;
        int subChoice_2 = 0;

        switch (choice)
        {
        case 1: // Savings Account
            do
            {
                subMenu(); // displays the sub menu
                subChoice_1 = getValidInput<int>("Enter the number: ");
                cout << "--------------------------------------------" << endl;
                switch (subChoice_1)
                {
                case 1: // deposit
                    amount = getValidInput<double>("Enter the amount you want to deposit: ");
                    userSavings.deposit(amount);
                    break;
                case 2: // withdraw
                    amount = getValidInput<double>("Enter the amount you want to withdraw: ");
                    userSavings.withdraw(amount);
                    break;
                case 3: // check balance
                    cout << "Displaying savings account balance..." << endl;
                    cout << "You have " << userSavings.displayBalance() << " PHP in savings." << endl;
                    break;
                case 4: // back
                    cout << "Returning to the main menu..." << endl;
                    break;
                default:
                    cout << "Invalid input. Please try again." << endl;
                    break;
                }
            } while (subChoice_1 != 4);

            break;
        case 2: // Current Account
            do
            {
                subMenu();
                subChoice_2 = getValidInput<int>("Enter the number: ");
                cout << "--------------------------------------------" << endl;
                switch (subChoice_2)
                {
                case 1: // deposit
                    amount = getValidInput<double>("Enter the amount you want to deposit: ");
                    userCurrent.deposit(amount);
                    break;
                case 2: // withdraw
                    amount = getValidInput<double>("Enter the amount you want to withdraw: ");
                    userCurrent.withdraw(amount);
                    break;
                case 3: // check balance
                    cout << "Displaying current account balance..." << endl;
                    cout << "You have " << userCurrent.displayBalance() << " PHP in your current account." << endl;
                    break;
                case 4: // back
                    cout << "Returning to the main menu..." << endl;
                    break;
                default:
                    cout << "Invalid input. Please try again!" << endl;
                    break;
                }
            } while (subChoice_2 != 4);
            break;
        case 3: // exit
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid input. Please try again!" << endl;
            break;
        }
    } while (repeat);

    return 0;
}
