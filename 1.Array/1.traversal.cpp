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
    
    cout<<"Your Entered elements are: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
