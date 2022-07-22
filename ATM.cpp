#include <iostream>
using namespace std;

void showMenu() {
    cout << "**********MENU**********" << '\n';
    cout << "1 - Check Balance" << endl;
    cout << "2 - Deposit" << endl;
    cout << "3 - Withdraw" << endl;
    cout << "4 - Exit" << endl;
    cout << "************************" << endl;
    
}

void checkBalance(double balance) {
    cout << "Balance: "<< balance << " dollars." << endl;
}

void deposit(double deposit, double *balance) {
    cout << "Deposit amount: ";
    cin >> deposit;
    *balance += deposit;
    cout << "You deposit " << deposit << " dollars." << '\n' << "New Balance: " << *balance << " dollars." << endl;  
}

void withDraw(double withDraw, double *balance) {
    cout << "Withdraw amount: ";
    cin >> withDraw;
    if(withDraw <= *balance){
        *balance -= withDraw;
        cout << "You withdraw: " << withDraw << " dollars." << '\n' << "New Balance: " << *balance << " dollars." << endl;
    }
    else {
        cout << "You have no money" << endl;
    }
}

int main() {

    //check balance, deposit, withdraw, show menu

    int option;
    double balance = 100;


    do {
        showMenu();
    cout << "Choose your option: " << endl;
    cin >> option;

    switch (option) {
        case 1: 
            checkBalance(balance);           
            break;
        case 2:
            double depositAmout;
            
            deposit(depositAmout, &balance);            
            break;
        case 3: 
            double widthdrawAmount;
            withDraw(widthdrawAmount, &balance);
            break;
        default:
            showMenu();
    }
    }while(option != 4);
    return 0;
}