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
    for(int i=0; i<n; i++)
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