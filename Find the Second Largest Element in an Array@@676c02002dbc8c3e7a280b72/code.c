#include<stdio.h>
#include<limits.h>//INT_MIN usekrna hai issliye yeh lgaya
int main()
{
    int n;
    scanf("%d", &n);
    //if array size is less than 2 then prnt -1 and exit
    if(n<2)
    {
    printf("-1");
    return 0;
    }
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int max2=INT_MIN; //yeh no. issliye bcz aisa no. kabhi test case mein ni hoga 
    //here var 2nd_max ni likhna bcz var name can't start from digit
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max)
        {
            max2=arr[i];
        }
    }
    //if max2 is still-5874996  then there is no 2nd max
    if(max2==INT_MIN)
    {
        printf("-1");
    }
    else
    {
        printf("%d", max2);
    }
    return 0;
}