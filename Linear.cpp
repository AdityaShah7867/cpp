 #include<bits/stdc++.h>
 using namespace std;

bool search(int arr[], int size, int key){

    for(int i=0; i<size; i++){

        if(arr[i] == key){
            return 1;
        }
      
        
    }

    return 0;

}


 int main(){
    int key;

    int arr [10] = {2,6,5,3,42,77,62,32,54,5};

    cout<<"key ?"<<endl;
    cin>>key;

    bool found = search(arr,10,key);

    if (found){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }


 }