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
    for(int i=1; i<=n/2; i++) //eg 5 no.s hai toh (1,5) (2,4) hi check krenge 3 toh same hi rahega 
    //eg 6 no.s hai toh n/2=3 i.e (1,6) (2,5) (3,4) check hoga 
    {
        if(arr[i]!=arr[n-i])
        {
            printf("NO");//agr nhi hai toh uss time no
            return 0;
        }
    }
    //agr pure mein condi false nhi hui 
    printf("YES");
    return 0;
}