#include<iostream>
using namespace std;

int firstOcc (int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;

}
int lastOcc (int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start + end)/2;


 while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;

}


int main (){
    int even[4] ={9,8,10,8};
    cout<< "first Occurrence of 8 is at index"<<firstOcc(even, 4, 8) << endl;
    //cout<< "last Occurrence of 3 is at index"<<lastOcc(even, 10, 3) << endl;
    return 0;

}
