#include<iostream>
using namespace std;

int getMin(int num[], int n) {

    int min = INT_MAX;

    for(int i = 0; i<n; i++) {

        min = min( min, num[i]);

        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return min;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;

    for(int i = 0; i<n; i++) {

        maxi = maxi(max, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}
