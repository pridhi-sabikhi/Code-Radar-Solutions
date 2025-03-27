#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], freq[n+1]={0};
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        freq[nums[i]]++;
    }
        // int c=1; //1 bcz counting mein yeh n. then isse aage jitni baar yeh no. aayega unsbko count krna hai . aage wale toh ho jayenge but yeh wala nhi hoga so 1 
        // if(arr[i]!=INT_MIN)//taaki jb no. -1 kiya tb vo count na ho
        // {
        // for(int j=i+1; j<n; j++)//start j with index i+1 taaki jb -1 kre toh i wal no. -1 na ho jaye and starting wale chahe -1  na ho bcz unhe dubara count nhi krna hai 
        // {
        //     if(arr[i]==arr[j])
        //     {
        //         c++;
        //         arr[j]=INT_MIN;//bcz no no. is INT_MIN so made no. INT_MIN
        //     }
        // }
        for(int i=0; i<n; i++)
        printf("%d %d\n", arr[i], freq[i]);
        
    
    return 0;
}