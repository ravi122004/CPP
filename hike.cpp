#include<iostream>
using namespace std;
int main(){
    char marriedStatus;
    cout<<"Enter your marital status (y/n): "<<endl;
    cin>>marriedStatus;
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    char gender;
    cout<<"Enter your gender (m/f): "<<endl;
    cin>>gender;    
    int currentSalary;
    cout<<"Enter your current salary: "<<endl;
    cin>>currentSalary;
    int incrementedSalary;
    if(gender=='m'&&marriedStatus=='y' &&age>35){
        cout<<"You are eligible for 20% increment"<<endl;
        incrementedSalary=currentSalary+(currentSalary*0.2);
        cout<<"Your new salary is "<<incrementedSalary<<endl;
        
    }else if(gender=='f' && age>30){
        cout<<"You are eligible for 15% increment"<<endl;
        incrementedSalary=currentSalary+(currentSalary*0.15);
        cout<<"Your new salary is "<<incrementedSalary<<endl;
    }else{
        cout<<"You are not eligible for increment"<<endl;
    }
}