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

    cout<<"Enter the element you want to add: ";
    int newelement;
    cin>>newelement;

    cout<<"Enter the element that you want to replace: ";
    int oldelement;
    cin>>oldelement;

    cout<<"Array before replace the new element: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }
    
    for(int i=0; i<length; i++){
        if(array[i] == oldelement){
            array[i] = newelement;
        }
    }
    
    cout<<endl<<"Array after replace the new element: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}