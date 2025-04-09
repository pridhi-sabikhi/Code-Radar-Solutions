#include <stdio.h>
struct day
{
    char dayname[100];
    int temp;
};
int main()
{
    struct day s1[7]; //can take 6
    float sum=0.0, avg=0.0;
    for(int i=0; i<7; i++)
    {
        scanf("%s", s1[i].dayname);
        scanf("%d", &s1[i].temp);
    }
    for(int i=0; i<7; i++)
    {
        sum= sum+s1[i].temp;
    }
    avg= sum/7;//can take 7.0
    printf("Average Temperature: %.2f", avg);
    return 0;
}