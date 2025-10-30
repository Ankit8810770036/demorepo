#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the length of Array: ";
    int length;
    cin>>length;
    int array[length];

    cout<<"Enter the elements: ";
    for(int i=0; i<length; i++){
        cin>>array[i];
    }

    cout<<"Array before sorting: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }

//  Insertion sort
    for(int i=1; i<length; i++){
        int key = array[i];
        int j = i-1;
        while(j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
 
    cout<<endl<<"Array After sorting: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}