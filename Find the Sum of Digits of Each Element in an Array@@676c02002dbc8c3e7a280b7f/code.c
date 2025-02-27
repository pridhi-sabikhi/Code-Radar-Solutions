#include<stdio.h>
#include<stdlib.h>//bcz we need to use abs() to take absolute value in case of negative no.s
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
        int sum=0, r=0; //for each element sum ki value 0 kro
        int num=abs(arr[i]);//abs value le rhe ke agr element is -12 toh sum 3 aaye 
        while(num>0)//yahan n>0 ni likh jaana glti se
        {
            r= num%10;
            sum += r;//+ aur = mein space ni daalana
            num /= 10;// / aur = mein space ni daalana
        }
        printf("%d ", sum);
    }
    return 0;
}