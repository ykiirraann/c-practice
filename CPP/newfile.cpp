


//We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
//based indexing so the subarray {5, 6} will be reversed and our 
//output array will be {1, 2, 3, 4, 6, 5}


#include<iostream>
using namespace std;



/*
int main()
{   
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;

    int m = 3;
    
    int start = m+1;
    int end = n-1;
    while(start<= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
    for(int i = 0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}*/

int main()
{   
    int arr[5] = {1,3,7,9,11}; // o/p {3,1,9,7,11}
    for(int i =0;i<5;i+=2){
        if(i+1<5){
            swap(arr[i],arr[i+1]);
            
        }
        
    }
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}


