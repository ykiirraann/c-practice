#include<iostream>
using namespace std;

//function to reverse elements of an array
void swapp(int start,int end){
    int temp = 0;
    temp = start;
    start = end;
    end=temp;
}
void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;
    while(start<=end){
        swapp(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}



int main()

{
    //Reverse array
    int arr[6] = {1,2,3,4,5,6};
    //int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr,6);
    printArray(arr,6);
    //cout<<swapp(3,5);
    

}