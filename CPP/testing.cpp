// A[] = {10, 20, 35, 50, 75, 80}
//   X =70 ;

#include<iostream>
using namespace std;

int main()
{
    int arr[6]={10, 20, 35, 50, 75, 80};
    int left = 0;
    int right = 5;
    int x = 30;
    while(left<right){
        if(arr[left]+arr[right]>70){
            right--;
        }
        else if(arr[left]+arr[right]<70){
            left++;

        }
        else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
            left++;
        }
    }
}