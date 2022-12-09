#include<iostream>
using namespace std;


int main()
{
   int arr[8] = {1,1,0,0,0,0,1,0}; //{0,0,0,0,0,1,1,1}
   
   int left = 0;
   int right = 7;
   while(left<=right){
       while(arr[left]==0){// [left] considered as index
           left++;
       }
       while(arr[right]==1){
           right--;
       }
       if(left<right){
           swap(arr[left],arr[right]);
           left++;
           right--;

       }
       
   }
    
   



}

