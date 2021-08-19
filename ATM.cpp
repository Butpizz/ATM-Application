#include <iostream>
using namespace std;

void showMenu()
{
    cout << "*******MENU*******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "******************" << endl;
}

int main(int argc, char const *argv[])
{
    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do
    {
        showMenu();
        cout << "Option : ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is : "
                 << " Rs." << balance << endl;
            break;

        case 2:
            cout << "Deposit Amount : ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            cout << "Your total balance is : "
                 << " Rs." << balance << endl;
            break;

        case 3:
            cout << "Withdraw Amount : ";
            double withdrawAmount;
            cin >> withdrawAmount;

            if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
                cout << "Your remaining balance is : "
                     << "Rs." << balance << endl;
            }
            else
            {
                cout << "Sorry, Not enough money!!!" << endl;
            }

            break;

        default:
            break;
        }
    } while (option != 4);

    system("pause>0");
    return 0;
}
