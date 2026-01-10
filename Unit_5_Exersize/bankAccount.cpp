#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Account{
    string name;
    long long accNum;
    string typeOfAcc;
    double amount;
    public:
        //member function
        //setter function 
        void setInfo(void){
            cout<<"Enter your name : ";
            getline(cin,name);
            cout<<"Enter your Type of account : ";
            getline(cin,typeOfAcc);
            cout<<"Enter the Balance of your account : ";
            cin>>amount;
            cout<<"Enter the Account number(to 12 digit number) : ";
            cin>>accNum;
            cout<<endl;
        }
    
        void nameInfo(void){
            cout<<"Your Name is : "<<name<<endl;
        }

        

};

int main(){
    Account p1;
    p1.setInfo();
    p1.nameInfo();
    return 0;
}