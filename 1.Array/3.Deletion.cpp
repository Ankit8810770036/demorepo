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

    cout<<"Enter the element you want to Delete: ";
    int newelement;
    cin>>newelement;

    cout<<"Array before Deleting the new element: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }
    
    for(int i=0; i<length; i++){
        if(array[i] == newelement){
            for(int j=i; j<length; j++){
                array[j] = array[j+1]; 
            }
        }
    }
    
    cout<<endl<<"Array after Deleting the new element: ";
    for(int i=0; i<length-1; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}