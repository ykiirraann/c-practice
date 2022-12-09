#include<iostream>
using namespace std;
int max(int arr[], int size){
    for(int i = 0; i<size; i++){
        if(max > arr[i+1]){
            max = max;
        }
        else{
            max = arr[i+1];
        }
    }
}
int main()
{
    //to find maximum in array
    int arr[6] = {3,13,7,9,11,30};
    int max = arr[0];
    for(int i = 0; i<6; i++){
        if(max > arr[i+1]){
            max = max;
        }
        else{
            max = arr[i+1];
        }
    }
    cout<< "max is " << max;
}


int main()
{
    //to find minimum in array
    int arr[6] = {3,13,7,9,11,30};
    int min = arr[0];
    for(int i = 0; i<6; i++){
        if(min < arr[i+1]){
            min = min;
        }
        else{
            min = arr[i+1];
        }
    }
    cout<< "min is " << min;
    int arr[] = {2,4,3,5,8,1};
    max(arr, 6);
}