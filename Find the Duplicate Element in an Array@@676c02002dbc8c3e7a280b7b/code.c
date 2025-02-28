//c++ ke hw Qs mein hai but issmein range is from 1 to n-1 
//using sort and swap method
//if n=5 i.e. 5 elements no.s then no. are from 1 to 4
//hr no. ko uss index pr daalo then jo no.bachega on index 0 vo duplicate hoga bcz 0 element nhi hai and n-1 index tk n-1 elements aa jayenge 
//inn mein while lgta hai for loop ni
#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d", &n);
    int arr[n];
    for(int a=0; a<n; a++)//a liya bcz i used tha already
    {
        scanf("%d", &arr[a]);
    }
    while(i<n)
    {
        int index= arr[i];
        if(index<n && arr[i]==arr[index])
        {//bcz no inbuilt swap funct issliye aisa krna padega
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
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