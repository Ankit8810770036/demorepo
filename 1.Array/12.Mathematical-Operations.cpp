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
    
    int sum = 0;
    int min=1000;
    int max=0;
    for(int i=0; i<length; i++){
        sum+=array[i];
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    int average = sum/length;

    cout<<"Sum of the elements are: "<<sum;
    cout<<endl<<"Average of the elements are: "<<average;
    cout<<endl<<"Maximum element from Array: "<<max;
    cout<<endl<<"Minimum element from Array: "<<min;

    return 0;
}