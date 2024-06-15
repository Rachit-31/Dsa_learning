#include<iostream>
using namespace std;
class human{
    public:
    int age;
    int weight;
    int height;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};
class Male:private human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    int getheight(){
       return this->height;
    }
};
int main(){
    // Male obj1;
    // cout<<obj1.age<<endl;
    // cout<<obj1.height<<endl;
    // cout<<obj1.weight<<endl;
    // cout<<obj1.color<<endl;
    // cout<<endl;
    // obj1.sleep();

    // obj1.setWeight(80);
    // cout<<obj1.weight<<endl;

    Male m1;
    cout<<m1.getheight();
    return 0;
}