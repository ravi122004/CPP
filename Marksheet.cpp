#include<iostream>
using namespace std;
int main(){
    string name;
    string course;
    cout<<"Enter your Name: "<<endl;
    cin>>name;
    cout<<"Enter your course Name: "<<endl;
    cout<<course;
    int n;
    cout<<"Enter No. of subject: "<<endl;
    cin>>n;
    int marks[n];
    cout<<"Enter subject marks: "<<endl;
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+marks[i];
    }
    int avg=sum/n;
    if(avg>=90){
        cout<<"Grade is: A+"<<endl; 
    }else if(avg>=80 && avg<90){
        cout<<"Grade is: A"<<endl;
    }else if(avg>=60 && avg<80){
        cout<<"Grade is: B"<<endl;
    }else{
        cout<<"fail";
    }
}