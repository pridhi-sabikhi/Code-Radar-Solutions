#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        c=0; //hr counting se pehle make count 0
        if(arr[i]!=-1)//taaki jb no. -1 kiya tb vo count na ho
        {
        for(int j=0; j<n; j++)
        {
            if(arr[j]==arr[i])
            {
                c++;
                arr[j]=-5;//bcz no no. is -1 so made no. -1
            }
        }
        printf("%d %d\n", arr[i], c);
        }

    }
    return 0;
}