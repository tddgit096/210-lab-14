//COMSC 210 | Lab 14| Toma Dimov
#include <iostream>
using namespace std;

class Color{
    //properties
    int r;
    int g;
    int b;


    //constructor
    Color(int r, int b, int g){setR(r);setB(b);setG(g);}
    //a function to clamp the incoming values to range 0-255
    int valueClamp(int n){
        if(n>255) //upper bound.
            return 255;
        if(r<0) //lowerbound
            return 0;
        return n;
    }
    public:
    //setters
    void setR(int r){this->r=valueClamp(r)};
    void setG(int g){this->g=valueClamp(g)};
    void setB(int b){this->b=valueClamp(b)};
    //getters
    int getR(){return r;};
    int getG(){return g;};
    int getB(){return b;};
};

int main(){
    return 0;
} // namespace std;
