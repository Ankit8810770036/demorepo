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

//  Selection sort
    for(int i=0; i<length; i++){
        int minvalueindex = i;

        for(int j=i+1; j<length; j++){
            if(array[j] < array[minvalueindex]){
                minvalueindex = j;
            }
        }

        if(minvalueindex != i){
            int temp = array[i];
            array[i] = array[minvalueindex];
            array[minvalueindex] = temp;
        }
    }
 
    cout<<endl<<"Array After sorting: ";
    for(int i=0; i<length; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}