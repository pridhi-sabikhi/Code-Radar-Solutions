//same as 7th bss max ki jagah min, min kijagah max , < ki jagah > and vice versa
#include<stdio.h>
#include<limits.h>//INT_MAX usekrna hai issliye yeh lgaya
int main()
{
    int n;
    scanf("%d", &n);
    //if array size is less than 2 then prnt -1 and exit
    // if(n<2)
    // {
    // printf("-1");
    // return 0;
    // }
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min=INT_MAX;
    int min2=INT_MAX; //yeh no. issliye bcz aisa no. kabhi test case mein ni hoga 
    //here var 2nd_max ni likhna bcz var name can't start from digit
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min2=min;
            min=arr[i];
        }
        else if(arr[i]<min2 && arr[i]!=min)
        {
            min2=arr[i];
        }
    }
    //if max2 is still-5874996  then there is no 2nd max
    if(min2==INT_MAX)
    {
        printf("-1");
    }
    else
    {
        printf("%d", min2);
    }
    return 0;
}