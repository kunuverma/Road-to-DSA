#include<iostream>
using namespace std;
int printarr(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int shorting(int arr[],int size){
   for(int j=0;j<size;j++){
     for(int i=0; i<size; i++){
        if(arr[i]<=arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        
        }
        
       
    }
   }

printarr(arr,size);
}

int main(){
    int i,size,arr[10];
    cout<<"Enter the size of array:";
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    shorting(arr,size);

return 0;
}