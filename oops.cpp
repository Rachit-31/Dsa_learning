#include<iostream>
using namespace std;

class hero {
private:
    char level;

    char getlevel() {
        return level;
    }

public:
    int health;
hero(){
    cout<<"constructor called"<<endl;
}

// paramaterised constructor
hero(int health){
    cout<<"hello this is rachit jain"<<this;
    this->health=health;
}

};

int main() {
    hero ramesh;

    hero *h=new hero;

    // statically
    // hero a;

    // dynamicallly
    // hero *b= new hero;
    return 0;
}
