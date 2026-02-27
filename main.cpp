#include <iostream>

using namespace std;

class color {

private: 

    int red;
    int green;
    int blue;

public: 

    int getred() { 
        return red; }
    void setred(int r)  {
        red = r;
    }

    int getgreen()         { return green; }
    void setgreen(int g)    { green = g; }
    
    int setblue()           { return blue; }
    void setblue(int b)      { blue = b; }

    void  print(){
        cout << "color output: " << blue << endl;
        cout << "color output: " << green << endl;
        cout << "color output: " << red << endl;
    }

    
};

void print(color);

int main(){

    color DarkRed;
    DarkRed.setred(1);
    DarkRed.setblue(2);
    DarkRed.setgreen(3);
    DarkRed.print();
    print(DarkRed);

    return 0;
    
}