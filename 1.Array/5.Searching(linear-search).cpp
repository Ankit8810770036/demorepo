#include <iostream>
using namespace std;
int main(){

    cout<<"Enter the length of array: ";
    int length;
    cin>>length;
    int array[length];
    
    cout<<"Enter the elements: ";
    for(int i=0; i<length; i++){
        cin>>array[i];
    }

    cout<<"Enter the element you want to Search: ";
    int keyelement;
    cin>>keyelement;

//  linear search 

    int index = -1;
    for(int i=0; i<length; i++){
        if(array[i] == keyelement){
            index = i;
        }
    }

    if(index == -1){
        cout<<"Your key element is not present in this array.";
    }else{
        cout<<"Your key element is found at "<<(index+2)<<" position.";
    }

    return 0;
}