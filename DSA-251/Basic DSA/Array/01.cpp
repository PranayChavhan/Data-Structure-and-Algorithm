// Second largest element in the array 

#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = arr[0];
    int second_largest = INT_MIN;

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest){
            second_largest = arr[i];
        }
    }

    if(second_largest == INT_MIN){
        return -1;
    }

    return second_largest;
}