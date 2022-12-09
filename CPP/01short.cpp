#include<iostream>
using namespace std;
int main()
{
        int arr[8] = {1,1,0,0,0,0,1,0};
        for(int i = 0; i<8; i++){
            for(int j =i+1;j<8;j++){// need kyo padi second loop ki bcz hume har element ko baaki ke saaare element se compare krna hai.
                if(arr[i] >= arr[j]){
                    swap(arr[i], arr[j]);
                    cout<<arr[i]<<" ";

                }
            }
            cout<<endl;
            
            cout<<arr[i]<<" ";
        }
}