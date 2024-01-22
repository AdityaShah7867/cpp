#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i=1;
    int j=0;

    while(i<=n){
        cout<<i<<" ";
        j=j+i;
        i++;
    }
    
    cout<<"\n"<<j<<endl;
   

  
     
}