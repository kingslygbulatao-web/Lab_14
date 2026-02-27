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
        cout << " " << endl;
        cout << "color output: " << blue << endl;
        cout << "color output: " << green << endl;
        cout << "color output: " << red << endl;
        cout << " " << endl;
    }

    
};

void print();

int main(){

    color DarkRed;
    DarkRed.setred(1);
    DarkRed.setblue(2);
    DarkRed.setgreen(3);
    DarkRed.print();
    
    color DarkGreen;
    DarkRed.setred(3);
    DarkRed.setblue(2);
    DarkRed.setgreen(3);
    DarkRed.print();
    
    color Darkblue;
    DarkRed.setred(1);
    DarkRed.setblue(2);
    DarkRed.setgreen(3);
    DarkRed.print();

    return 0;
    
}