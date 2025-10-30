#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the length of Array1: ";
    int length1;
    cin>>length1;
    cout<<"Enter the Elements of Array1: ";
    int array1[length1];
    for(int i=0; i<length1; i++){
        cin>>array1[i];
    }
    
    cout<<"Enter the length of Array2: ";
    int length2;
    cin>>length2;
    cout<<"Enter the Elements of Array2: ";
    int array2[length2];
    for(int i=0; i<length2; i++){
        cin>>array2[i];
    }

    int length3 = length1 + length2;
    int array3[length3];
    for(int i=0; i<length3; i++){
        if(i < length1){
            array3[i] = array1[i];
        }else{
            array3[i] = array2[i-length1];
        }
    }
    cout<<"This is your merged Array: ";
    for(int i=0; i<length3; i++){
        cout<<array3[i]<<" ";
    }
}
