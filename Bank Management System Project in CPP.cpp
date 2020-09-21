//Bank Management System
#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Bank
{
    char name[100], address[100];
    char type;
    int balance=0, startAmount;
    public:
        void openAccount();
        void depositeMoney();
        void withdrawMoney();
        void displayAccount();
};

void Bank::openAccount()
{
    cout<<"Enter your Full Name : ";
    cin.ignore();  cin.getline(name,100);
    
    cout<<"\nEnter your Address : ";
    cin.ignore();  cin.getline(address,100);
    
    cout<<"\nWhich type of account you want to open - Saving(s) or Current(c) : ";
    cin>>type;
    
    cout<<"\nEnter Deposit Amount : ";
    cin>>balance;
    startAmount=balance;
    
    cout<<"\nCongrats! Your account has been created\n";
}
void Bank::displayAccount()
{
    cout<<"Your Full Name :\t"<<name;
    cout<<"\nYour Address : \t"<<address;
    cout<<"\nYour Account Type is : \t"<<type;
    cout<<"\nInitial Amount You Diposited in Your Account is : \t"<<startAmount;
    cout<<"\nCurrent Total Amount in Your Account is : \t"<<balance;
    cout<<"\n";
}
void Bank::depositeMoney()
{
    int a;
    cout<<"Enter amount to deposit : ";
    cin>>a;
    balance+=a;
    cout<<"\nTotal amount in your account is : \t"<<balance;
    cout<<"\n";
}
void Bank::withdrawMoney()
{
    float amount;
    cout<< "\n Enter amount to Withdraw : ";
    cin>>amount;
    balance-=amount;
    cout<<"Now total amount is left : \t"<<balance;
    cout<<"\n";
}

int main()
{
    int ch;
    Bank obj;
    char x;
    do
    {
    	cout<<"\n**Welcome to UBI**\n";
        cout<<"1) Open Account \n";
        cout<<"2) Deposit Money \n";
        cout<<"3) Withdraw Money \n";
        cout<<"4) Display Amount \n";
        cout<<"5) Exit\n";
        cout<<"\nSelect your option \n";
        cin>>ch;
        system("cls");
        switch(ch)
        {
        case 1:
            cout<<"1) Open Account \n";
            obj.openAccount();
            break;

        case 2:
            cout<<"2)Deposit Money \n";
            obj.depositeMoney();
            break;
            
        case 3:
            cout<<"3)Withdraw Money \n";
            obj.withdrawMoney() ;
            break;
            
        case 4:
            cout<<"4)Display Amount \n";
            obj.displayAccount();
            break;
            
        case 5:
            if(ch==5)  exit(1);

        default:
            cout<<"Enter a different choice \n";
        }

        cout<<"\nTo Conitnue Press : Y ";
        cout<<"\nTo Quit Press : N \n";
        x=getch();
        if(x=='n'||x=='N')  exit(0);
    }
    while(x=='y'||x=='Y');
    getch();
    return 0;
}
