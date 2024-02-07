 #include<bits/stdc++.h>
 using namespace std;


 void update(int arr[], int n){

    cout<<"started"<<endl;

    arr[0]= 120;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    cout<<"ended"<<endl;

 }


int main(){

    int arr [3] = {1,2,3};
    update(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}