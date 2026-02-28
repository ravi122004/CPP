#include<iostream>
using namespace std;
int main(){
    int noOfloans;
    cout<<"Enter number of loans"<<endl;
    cin>>noOfloans;
    if(noOfloans>1){
        cout<<"no loans available"<<endl;
    }else{
        int existedLoanAmount;
        int needLoan;
        cout<<"Enter amount of loan needed"<<endl;
        cin>>needLoan;
        cout<<"Enter existed loan amount"<<endl;
        cin>>existedLoanAmount;
        if(existedLoanAmount>50000){
            cout<<"No loan available"<<endl;
        }else{
            if((needLoan)<=50000-existedLoanAmount){
                cout<<"Loan approved: "<<needLoan<<endl;
            }else{
                cout<<"Only loan u can get"<<50000-existedLoanAmount<<endl;
            }
        }
        
    }
}