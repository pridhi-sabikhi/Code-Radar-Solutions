
//almost same as 6 Q find freq 
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        int c=1 ;//for every no. reset it to 0
        if(arr[i]!=INT_MIN)
        {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=INT_MIN;
            }
        }
        
        if(c>(n/2))
        {
            printf("%d", arr[i]);
            return 0;
        }
        }
        
    }
    //full mein aisa koi nhi mila
    printf("-1");
    return 0;
}