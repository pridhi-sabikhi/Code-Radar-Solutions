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
    for(int i=0; i<n/2; i++) //eg 5 no.s hai toh 0 to 2 jayega: check honge (0,4) (1,3) hi check krenge 2 toh same hi rahega 
    //eg 6 no.s hai toh n/2=3 i.e (0,5) (1,4) (2,3) check hoga 
    {
        if(arr[i]!=arr[n-i-1])
        {
            printf("NO");//agr nhi hai toh uss time no
            return 0;
        }
    }
    //agr pure mein condi false nhi hui 
    printf("YES");
    return 0;
}