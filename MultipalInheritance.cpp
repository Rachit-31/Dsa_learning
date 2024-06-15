#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking "<<endl;
    }
};

class human{
    public:
    string color;

    public:
    void speak(){
        cout<<"human speaking";
    }
};

// multiple inheritance
class hybrid: public Animal,public human{

};

int main(){
    hybrid obj1;
    obj1.speak();
    cout<<endl;
    obj1.bark();
    return 0;
}