#include <iostream>
using namespace std;


void printArray( int arr[], int size ){

cout<<"function started"<<endl;
    
for(int i=0; i<size;i++){
    cout<< arr[i];
}
cout<<""<<endl;

cout<<"function ended"<<endl;

}



int main(){

int third[]={3,5,6};

int tsize = sizeof(third)/4;
printArray(third,tsize);









}