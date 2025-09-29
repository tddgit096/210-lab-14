//COMSC 210 | Lab 14| Toma Dimov
#include <iostream>
using namespace std;

class Color{
    //properties
    int r;
    int g;
    int b;


    //constructor
    //destructor
    //setters
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
    void getR(int r){};
    void getG(int g){};
    void getB(int b){};
};

int main(){
    return 0;
} // namespace std;
