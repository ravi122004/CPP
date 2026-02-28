#include<iostream>
using namespace std;

void calculateSimpleInterest(){
    float principal, rate, time,interest;

    cout<<"Enter principal amount: ";
    cin>>principal;
    cout<<"Enter rate of interest: ";
    cin>>rate;
    cout<<"Enter time in years: ";
    cin>>time;    
    
    interest = (principal * rate * time) / 100;
    cout<<"Simple Interest: "<<interest<<endl;
}
void calculateCompoundInterest(){
    float principal, rate, time, amount, interest;
    cout<<"Enter principal amount: ";
    cin>>principal;
    cout<<"Enter rate of interest: ";
    cin>>rate;
    cout<<"Enter time in years: ";
    cin>>time;         
    amount = principal * pow((1 + rate / 100), time);
    interest = amount - principal;
    cout<<"Compound Interest: "<<interest<<endl;
} 

int main(){
    char choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 'A':
        case 'a':
            calculateSimpleInterest();
            break;
        case 'B':
        case 'b':
            calculateCompoundInterest();
            break;  

        case 'C':
        case 'c':
            calculateSimpleInterest();
            calculateCompoundInterest();
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            break;  
        }
    }