#include<iostream>
using namespace std;
class bottle{
    public:
    string companyName;
    double price;
    string quality;
    void print(){
        cout<<"Company name is: "<<companyName<<endl;
        cout<<"Price is: "<<price<<endl;
        cout<<"Quality is: "<<quality<<endl;
    }
};
int main(){
    bottle obj1;
    obj1.companyName="Milton";
    obj1.price=60;
    obj1.quality="Good";
    obj1.print();
    return 0;
    
    
}