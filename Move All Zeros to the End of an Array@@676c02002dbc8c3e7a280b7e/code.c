#include<stdio.h>
int new_array(int arr[], int n)
{
    //if want to move all 0s to starting and koi order no. ni change krna 
    int count=n-1;
    for(int i=n-1; i>0; i++)//start checking from n-1 bcz reverse mein order ni change krna
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count--;
        }
    }
    while(count>=0)//ab 0 index tkk sbhi mein 0 daal do 
    {
        arr[count]=0;
        count--;

    }
}

    // int count=0;
    // for(int i=0; i<n; i++)
    // {
    //     if (arr[i]!=0)
    //     {
    //         arr[count++]=arr[i];// i.e startint pr vo element daaldo
    //     }
    // }
    // //now  fill remaining indexes with 0s
    // while(count<n)
    // {
    //     arr[count++]=0;
    // }

int print(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    new_array(arr,n);
    print(arr,n);
    return 0;
}