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
    int max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    //to make max index =-1
    for(int i=0; i<n; i++)
    {
        if(arr[i]==max)
        {
        arr[i]=-1;
        max=-1;//bcz vrna max vo biggest no. stored rehta
        }
    }
    //now max is -1 so ab jo max nikalenge vo 2nd max hoga
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d", max);// agr koi na hua toh -1 print hoga
     
    return 0;
}