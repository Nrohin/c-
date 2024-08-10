#include<iostream>
using namespace std;
class bank{
string acc_no;
string name;
double balance;
double b,w;

int pin;
public:
void getdata(){
cout<<"Enter your Account Number 123***789:\t"<<endl;
cin>>acc_no;
cout<<"Enter your Name:\t"<<endl;
cin>>name;
cout<<"Enter your balance:\t"<<endl;
cin>>balance;
cout<<"Enter your Tpin:\t"<<endl;
cin>>pin;
}
void deposit()
{
    cout<<"Enter the amount to be deposited:\t"<<endl;
    cin>>b;
    cout<<"Credit Rs"<<b<<endl;
    cout<<"Total amount Rs"<<b+balance<<endl;
}
void withdraw()
{
    cout<<"Enter the Withdrawal Amount:\t"<<endl;
    cin>>w;
    if(balance<w||w<500){
       cout<<" !!!insufficent amount or entered Amount is less than withdrwal limit !!!";
    }else{
         cout<<"debited Rs"<<w<<endl;
    cout<<"Total amount Rs"<<balance-w<<endl;
    }
   
}

};
int main()
{
    int i;
    bank c1;
    c1.getdata();
    cout<<"press\n1. to deposite "<<endl;
    cout<<" 2.to withdrawal"<<endl;
    cout<<"Make you choice:";
    cin>>i;
    switch(i)
    {
    case 1:
    c1.deposit();	
    break;
    case 2:
    	c1.withdraw();
    break;
    default:
    cout<<"!!!Error in choice!!!";
    }
    return 0;
}