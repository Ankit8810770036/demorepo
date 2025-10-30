#include <iostream>
using namespace std;
int main(){

    cout<<"Enter the length of array: ";
    int length;
    cin>>length;
    int array[length];

    int RotatedArray[length];
    
    cout<<"Enter the elements: ";
    for(int i=0; i<length; i++){
        cin>>array[i];
    }

    cout<<"Enter the no. of times you want to Rotate your Array: ";
    int NoOfRotation;
    cin>>NoOfRotation;
    
    NoOfRotation = NoOfRotation % length;

    cout<<"Array before Rotation: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }

// Remember the line for Rotation of Array:
    for(int i=0; i<length; i++){
        RotatedArray[(i+NoOfRotation)%length] = array[i];
    }
    
    cout<<endl<<"Array After Rotation: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}