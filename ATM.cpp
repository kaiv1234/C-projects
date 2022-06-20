#include<iostream>

using namespace std ;

void showMenu()
{
    cout<<"********Menu********"<<endl;
    cout<<"1 . Check Balence "<<endl;
    cout<<"2 . Deposite "<<endl;
    cout<<"3 . Withdraw "<<endl;
    cout<<"4 . Exit "<<endl;
    cout<<"********************"<<endl;
}

int main()
{
    // check balence , deposite , withdraw and show menu
    int option;
    double balance=100000;
    system("cls");
    do{
    showMenu();
    cout<<"Choose option :- ";
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"balance is :- "<<balance<<endl;
        break;
    case 2:
    cout<<"Deposite amount :-";
        double depositeAmount;
        cin>>depositeAmount;
        balance=balance+depositeAmount;
        break;
    case 3:
    cout<<"Withdraw amount :-";
        double withdrawAmount;
        cin>>withdrawAmount;
        if(withdrawAmount<=balance)
            balance=balance-withdrawAmount;
        else
        cout<<"Not Enough Money"<<endl;
        break;
    default:
    cout<<"Not from the options"<<endl;
    break;
    }
    }
    while (option!=4);
    
    
    system("pause>0");
}