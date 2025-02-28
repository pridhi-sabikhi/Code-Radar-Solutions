//c++ ke hw Qs mein hai but issmein range is from 1 to n-1 
//using sort and swap method
//if n=5 i.e. 5 elements no.s then no. are from 1 to 4
//hr no. ko uss index pr daalo then jo no.bachega on index 0 vo duplicate hoga bcz 0 element nhi hai and n-1 index tk n-1 elements aa jayenge 
//inn mein while lgta hai for loop ni
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while(i<n)
    {
        int index= arr[i];
        if(arr[i]!=arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else 
        {
            i++;//check next element
        }
    }
    //now element at arr[0] is the duplicate element 
    printf("%d", arr[0]);
    return 0;
}