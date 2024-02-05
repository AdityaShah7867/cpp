#include<iostream>
using namespace std;

bool isEven (){
    int a;
    cout<<"enter number"<<endl;
    cin>>a;
    if (a&1) {
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    int answer;
    answer = isEven();
    cout<<answer;

}