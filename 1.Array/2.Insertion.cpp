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

    cout<<"Enter the element you want to insert: ";
    int newelement;
    cin>>newelement;

    cout<<"Enter the position where you want to insert: ";
    int position;
    cin>>position;

    cout<<"Array before inserting the new element: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }
    
    for(int i=length; i>=0; i--){
        if(i > position-1){
            array[i] = array[i-1];
        }
        else if(i == position-1){
            array[i] = newelement;
        }
    }
    
    cout<<endl<<"Array after inserting the new element: ";
    for(int i=0; i<=length; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}