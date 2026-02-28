#include<iostream>
using namespace std;
class Animal{
    public: 
    void eat(){
        cout<<"Eating..."<<endl;
    }

};
class Dog: public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};
class cat: public Animal{
    public:
    void meow(){
        cout<<"Meowing..."<<endl;
    }
};
int main(){
    Dog d;
    cat c;
    d.eat();
    d.bark();   
    c.meow();
    c.eat();
}



