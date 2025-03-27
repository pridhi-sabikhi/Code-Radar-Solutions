//check ke better sol hoskta hai ya nhi
//find if no. is greater than its neighbors
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    //first input n then declare array
    int arr[n];
    for(int i=0; i<n; i++)//start from 0 vrna  error aa rha hai
    {
        scanf("%d", &arr[i]);
    }
    int peak = -1;

    // Check for the first element
    if (n == 1) {
        peak = arr[0]; // Only one element is a peak
    } 
    else if (arr[0] > arr[1]) 
    {
        peak = arr[0]; // First element is a peak
    } 
    else if
    {
        for(int i=1; i<n-1; i++)//start from 1 bcz 0 kiya toh can't check i-1, n-1 bcz for last index  i+1 index hoga hi nhi
    {
        //checking ke mid mein toh nhi greatest
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        {
        peak= arr[i];
        }
    }
    }
    else if(arr[n-1]>arr[n-2])
        {
        peak= arr[n-1];
        
        }
        //w.m no peak no.
        else{
        peak=-1; //if no peak element
        }
        printf("%d", peak);
    return 0;
}