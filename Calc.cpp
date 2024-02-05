#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout <<"enter first"<<endl;
    cin>>a;

    cout <<"enter Second"<<endl;
    cin>>b;

    cout<<"choose operator"<<endl;
    cin>>op;

    switch (op){
        case '+': cout<<(a+b)<<endl;
                  break;
        case '-': cout<<(a-b)<<endl;
                  break;
        case '/': cout<<(a/b)<<endl;
                  break;
        case '*': cout<<(a*b)<<endl;
                  break;
    }

}