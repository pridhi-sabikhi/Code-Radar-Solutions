#include<stdio.h>
#include<limits.h>//INT_MIN usekrna hai issliye yeh lgaya
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=INT_MIN;
    int max2=INT_MIN; //yeh no. issliye bcz aisa no. kabhi test case mein ni hoga 
    //here var 2nd_max ni likhna bcz var name can't start from digit
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max2=max;//max2 mein pichli max ki value daal deni hai 
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