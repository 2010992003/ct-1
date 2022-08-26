//Kalpana Kochhar
//2010991587
//Set:- 4 
//Q1

























#include <iostream>
#include <unordered_set>
using namespace std;
 
int findMinIndex(int arr[], int n)
{
    int minIndex = n;
 
    unordered_set<int> set;
     for (int i = n - 1; i >= 0; i--)
    {
        
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
       
        else {
            set.insert(arr[i]);
        }
    }
 
    
    if (minIndex == n) {     //for invalid output
        return- 1;
    }
    
   
  
    return minIndex;  // for return min index
}
 
int main()
{
    int arr[] = {5,6,3,4,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
   int minIndex = findMinIndex(arr, n);
   if(minIndex != n) {
        cout << "The minimum index of repeating element is " << minIndex;
    }
    else{
        cout << "invalid output";
    }
 
    return 0;
}


