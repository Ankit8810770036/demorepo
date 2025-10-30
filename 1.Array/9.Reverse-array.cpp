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
    
    cout<<"Array before Reversing: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }
    
    for(int i=0; i<length/2; i++){
        int temp = array[i];
        array[i] = array[length-1-i];
        array[length-1-i] = temp;
    }
    
    cout<<endl<<"Array After Reversing: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}