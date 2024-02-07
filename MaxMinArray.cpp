 #include<bits/stdc++.h>
 using namespace std;

int getMax(int num[], int size){

    int maxi= INT_MIN ;

     for(int i=0; i<size;i++){
        
    maxi= max(maxi,num[i]);

    }

    return maxi;

}

int getMin(int num[], int size){

    int min= INT_MAX ;

    for(int i=0; i<size;i++){

        if(num[i] < min){
            min=num[i];
        }
    }    

    return min;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    for (int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"max value "<< getMax(num, size)<<endl;
    cout<<"min value "<< getMin(num, size)<<endl;

}