//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
#include<conio.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {

 int lower=0, upper=n;
        int mid=(upper-lower)/2;

        while(mid!=0)
        {

            if(arr[mid]==k)
              return mid;

            if(k<arr[mid])
             {
                 upper=mid;
                 mid=(upper-lower)/2;

             }

            if(k>arr[mid])
            {
                lower=mid;
                mid=(upper-lower)/2;
                if(mid==0)
                    return -1;
                mid=mid+lower;

            }

        }

        return -1;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
        getch();
    }
}

// } Driver Code Ends
