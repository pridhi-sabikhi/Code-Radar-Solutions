//segmentation fault tb bhi aata hai jb scanf mein & na lgaya ho 
#include <stdio.h>
#include <string.h>
struct Subscription
{
    char name[100], type[100];
    float cost;
};
int main()
{
    int N, countb =0, counts=0, countp=0;
    float totalb=0.0, totalp=0.0, totals=0.0;
    scanf("%d", &N);
    struct Subscription s1[N];
    for(int i=0; i<N; i++)
    {
        scanf("%s", s1[i].name);
        scanf("%s", s1[i].type);
        scanf("%f", &s1[i].cost);
    }
    for(int i=0; i<N; i++)
    {
        //string word checking ke liye nhi utha rha 
        if(strstr(s1[i].name, "Basic"))
        {
        countb ++;
        totalb = totalb + s1[i].cost;
        }
        else if(strstr(s1[i].name, "Standard"))
        {
            counts ++;
            totals = totals + s1[i].cost;
        }
        else if(strstr(s1[i].name, "Premium"))
        {
            countp ++;
            totalp = totalp + s1[i].cost;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f"
    , countb, totalb, counts, totals, countp, totalp);
    return 0;
}