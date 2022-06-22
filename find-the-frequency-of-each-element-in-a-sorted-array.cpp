#include <bits/stdc++.h>
using namespace std;
 
    // Function to print the frequency
    // of each element of the sorted array
     void printFreq(vector<int> &arr, int N)
    {
        
        // Stores the frequency of an element
        int freq = 1;
        
       // Traverse the array arr[]
        for (int i = 1; i < N; i++)
        {
           
            // If the current element is equal
            // to the previous element
            if (arr[i] == arr[i - 1])
            {
               
                // Increment the freq by 1
                freq++;
            }
           
        // Otherwise,
            else {
                cout<<"Frequency of "<<arr[i - 1]<< " is: " << freq<<endl;
                // Update freq
                freq = 1;
            }
        }
        
        // Print the frequency of the last element
       cout<<"Frequency of "<<arr[N - 1]<< " is: " << freq<<endl;
       }
 
    // Driver Code
    int main()
    {
       
        // Given Input
        vector<int> arr
            = { 3,3,3,3,6,6,6,6,8,8,8,8,9,9,9,};
        int N = arr.size();
       
        // Function Call
        printFreq(arr, N);
    return 0;
    }   
 