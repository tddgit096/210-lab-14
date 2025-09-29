//COMSC 210 | Lab 14| Toma Dimov
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int SIZE = 10;

class Color{
//properties
    int r;
    int g;
    int b;

    public:
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
//setters
    void setR(int r){this->r=valueClamp(r)};
    void setG(int g){this->g=valueClamp(g)};
    void setB(int b){this->b=valueClamp(b)};
//getters
    int getR(){return r;};
    int getG(){return g;};
    int getB(){return b;};
//print self
    void print(){
        string bar = "-------";
        int charWidth = 10;
        cout<<setw(charWidth)<<"Color#"<<setw(charWidth)<<"R value"<<setw(charWidth)<<"G value"<<setw(charWidth)<<"B value"<<endl;
        cout<<setw(charWidth)<<bar<<setw(charWidth)<<bar<<setw(charWidth)<<bar<<setw(charWidth)<<bar<<endl;
        for(int i =0;i<v.size();i++){
            cout<<setw(charWidth)<<i+1;
            cout<<setw(charWidth)<<v[i].r;
            cout<<setw(charWidth)<<v[i].g;
            cout<<setw(charWidth)<<v[i].b;
            cout<<endl;
        }
    }
};

int main(){
    srand(time(nullptr));
    Color colors[SIZE];

    for(int i=0;i<SIZE;i++){
        Color *C = new Color(rand()%256,rand()%256,rand()%256);
        colors[i]=C;
    }

    //print here
    return 0;
}
