#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = (start + end)/2;// to avoid integer overflow of int range, we use this... 
    // int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        // go to right wala part
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end) / 2;//int mid = start + (end - start)/2;
    }
    return -1;
}



int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenIndex = binarySearch(even, 6, 6);
    cout << "Index of 6 is " << evenIndex << endl;
    
    int oddIndex = binarySearch(odd, 5, 14);
    cout << "Index of 14 is " << oddIndex << endl;
    
    return 0;
}






//end = nums.size()-1;



int ans(int arr[],int n,int target){
    int start =0;
    int end =11;
    int mid = (start+end)/2;
    int ans =-1;
    while(start<=end){
        if(arr[mid]==target){
            ans = mid;
            return ans;
        }
        else if (arr[mid]>target){
            end=end-1;
        }
        else{
            start = mid +1;
        }
        mid = (start+end)/2;
    }
    return ans;

}
                  








