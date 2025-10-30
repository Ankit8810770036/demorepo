#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the length of Array: ";
    int length1;
    cin>>length1;
    cout<<"Enter the Elements of Array: ";
    int array1[length1];
    for(int i=0; i<length1; i++){
        cin>>array1[i];
    }
    
    cout<<"Enter the length of 1st splited Array: ";
    int length2;
    cin>>length2;
    
    int length3 = length1 - length2;
    


    int array2[length2];
    int array3[length3];

    for(int i=0; i<length1; i++){
        if(i < length2){
            array2[i] = array1[i];
        }else{
            array3[i-length2] = array1[i];
        }
    }

    cout<<"This is your first Splited array: ";
    for(int i=0; i<length2; i++){
        cout<<array2[i]<<" ";
    }
    cout<<endl<<"This is your second Splited array: ";
    for(int i=0; i<length3; i++){
        cout<<array3[i]<<" ";
    }
}
