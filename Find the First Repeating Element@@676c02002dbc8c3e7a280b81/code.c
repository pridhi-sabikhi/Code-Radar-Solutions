#include<stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    //to print unique no. in array 
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for(int i=0; i<n; i++)
    // {
    //     int c=0;
    //     if(arr[i]!=INT_MIN)
    //     {
    //     for(int j=i+1; j<n;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             c++;
    //             arr[j]=INT_MIN;
    //         }
    //     }
    //     if(c==0)//w/m unique element 
    //     printf("%d \n", arr[i]);  //Written inside of if not equal bcz we don't want to print INT_MIN
    //     }
    // }

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    {
        for(int j=i+1; j<n; j++)//start j with index i+1 bcz pichle toh check ho chuke hai 
        //and jis no. ko check krna ahi ussi no. ko dubara lekr usse hi repeated na smj le
        {
            if(arr[i]==arr[j])
            {
               printf("%d", arr[i]);
               return 0;
            }
        }
    }
        printf("-1"); //no repeating element
    return 0;
}