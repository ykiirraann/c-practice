#include<iostream>
using namespace std;



int main(){
    int start = 0;
    int end = 6;
    int target = 5;
    int nums[7] = {1,3,5,6,7,9,10};
    int mid = (start + end) /2;
    while(start <= end){
        if(nums[mid] == target){
            cout<< mid;
            break;
        }
        else if(nums[mid]>target){
            end = end -1;
        }
        else{
            start = mid + 1;
        }
        mid = (start+end)/2;
        
    }
    if(nums[start]> target){
        cout<<start;

    }
    else if(nums[start]<target){
        cout<<start+1;
    }
    
    cout<<start;
    
    
}


// arr[8]= {1,3,5,7,8,9,10,12}
// target =2;    star = 0   end = 7 , 2

