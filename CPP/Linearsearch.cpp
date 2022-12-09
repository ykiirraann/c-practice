#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(target == arr[i]){
            return i;
        }       
    }
    return -1;

}

int main()
{
    int target = 30;
    int arr[6] = {2,30,5,7,9,29};
    cout<<"Element at "<< linearsearch(arr, 6, target)<<" index"<<endl;










    /*
    //without using function
    int target = 20;
    int arr[7] = {3,5,6,8,11,15,30};
    for(int i = 0; i<7; i++){
        if(target == arr[i]){
            cout<<i;
        }
    }*/
}
