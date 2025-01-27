#include <stdio.h>
int main() {
    int s1, s2, s3; //vaise sides float lete but given thaa ke int lo so int liya 
    scanf("%d %d %d", &s1, &s2, &s3);
    if (s1==s2 && s1==s3 && s2==s3){ //aise ni likh skte s1==s2==s3 bcz compare sirf 2 mein hi hota 3 mein ni
        printf("Equilateral");
    }
    // w/m all 3 are not equal
    else if(s1==s2 || s1==s3 || s2==s3) { // w/m any 2 are equal  and no need to put separate brackets
      printf("Isosceles");
    }
    else{  //w/m all sides are different
       printf("Scalene");
    }
    return 0;
}