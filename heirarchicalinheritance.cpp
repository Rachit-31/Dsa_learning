#include<iostream>
using namespace std;
class a{
    public:
    void func1(){
        cout<<"function 1"<<endl;
    }
};
class b:public a{
    public:
    void func2(){
        cout<<"func 2"<<endl;
    }
};
class c:public a{
    public:
    void func3(){
        cout<<"func 3"<<endl;
    }
};

int main(){

    a obj1;
    obj1.func1();

    b obj2;
    obj2.func1();
    obj2.func2();

    c obj3;
    obj3.func1();
 
    return 0;
}