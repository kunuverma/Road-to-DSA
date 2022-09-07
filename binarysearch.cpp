#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
int start = 0;
int end = size-1;
int mid = (start + end)/2;

while(start<=end){
    if (arr[mid] == key){
        return mid;
    }
    if(key > arr[mid]){
        start = mid+1;
    }
    else{
        end  = mid-1;
    }
    mid = (start + end)/2;
    }
    return -1;
}


int main(){
    int even[6] = {2,4,6,12,14};
    int odd[5] = {3,5,11,13,17};

    int evenIndex = binarySearch(even, 6,33);
    cout<<"index of 33 is"<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 75);
    cout<<"index of 75 is"<< oddIndex<<endl;

    return 0;
}
