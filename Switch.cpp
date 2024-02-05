#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num=1;
    char ch = 'a';

    switch(ch){

        
        case 1: cout<<"first"<<endl;
                break;

        case 'a': switch(num){
            case 1 : cout<<"hello"<<endl;
            break;
            }
            break;

        case 3: cout<<"third"<<endl;
                break;
        case 4: cout<<"fourth"<<endl;
                break;
            
        default: cout<<"def case"<<endl;
    }
}