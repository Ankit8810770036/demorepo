#include <iostream>
using namespace std;
int main(){

    cout<<"Enter the length of array: ";
    int length;
    cin>>length;
    int array[length];

    int newArray[length];
    
    cout<<"Enter the elements: ";
    for(int i=0; i<length; i++){
        cin>>array[i];
    }

    cout<<"Original Array: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }

    for(int i=0; i<length; i++){
        newArray[i] = array[i];
    }
    
    cout<<endl<<"Duplicate Array: ";
    for(int i=0; i<length; i++){
        cout<<newArray[i]<<" ";
    }
    return 0;
}