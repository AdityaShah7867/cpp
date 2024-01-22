#include<iostream>
#include<conio.h>
using namespace std;

int main (){
    int a =123;
    cout<< a <<endl;

    char b = 'A';
    cout<< b <<endl;

    bool ab=true;
    cout<< ab <<endl;

    float f=1.2;
    cout<< f <<endl;

    double d =1.33;
    cout<< d <<endl;

    int sizea = sizeof(a);
    int sizeb = sizeof(b);
    int sizeab = sizeof(ab);
    int sizef = sizeof(f);
    int sized = sizeof(d);

    cout<< sizea <<endl;
    cout<< sizeb <<endl;
    cout<< sizeab <<endl;
    cout<< sizef <<endl;
    cout<< sized <<endl;
}