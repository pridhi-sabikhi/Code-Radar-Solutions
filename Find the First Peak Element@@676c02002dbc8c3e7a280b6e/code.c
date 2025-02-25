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
    for(int i=1; i<n-1; i++)//start from 1 bcz 0 kiya toh can't check i-1, n-1 bcz for last index  i+1 index hoga hi nhi
    {
        //checking ke mid mein toh nhi greatest
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        {
        printf("%d", arr[i]);
        return 0;//exit prog don't execute anything
        }
    }
        //now check 1st and last bcz vo no. skip kiye thee for loop mein
        //if nhi then check ke 1st no. toh nhi greatest
        if(arr[0]>arr[1])
        {
        printf("%d", arr[0]);
        
        }
        //agr yeh bhi nhi toh check ke last no. is gretatest
        if(arr[n-1]>arr[n-2])
        {
        printf("%d", arr[n-1]);
        
        }
        //w.m no peak no.
        else{
        printf("-1"); //if no peak element
        }
    return 0;
}