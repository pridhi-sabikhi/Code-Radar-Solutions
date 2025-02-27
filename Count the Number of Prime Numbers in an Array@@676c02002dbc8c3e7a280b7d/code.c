#include<stdio.h>
#include<math.h> //sqrt use krna hai
int main()
{
    int n, prime=0;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)//for array elements
    {
        int c=0;//for each element counting krni hai factors ki
        int k=sqrt(arr[i])  //bcz sqrt gives float toh int mein store kiya taaki loop chla ske

        if(arr[i]>1)//toh hi kro if number is not 1 bcz 1 is neither prime but vo condition bigarega
        {

        for(int j=2; j<k; j++)//start checking prime from 2 aur agr 2 se leke sqrt tk no number se div that means it is prime
        {

        if(arr[i]%j==0)
        c++;
        }

        if(c==0)//w/m it is prime no. 
        prime++;
        }
    }
    printf("%d", prime);
    
    return 0;
}