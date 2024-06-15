#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};

class dog:public Animal{

};

class german:public dog{

};
int main(){
    dog d;
    d.speak();
    cout<<d.age<<endl;

    german g;
    g.speak();
    return 0;
}