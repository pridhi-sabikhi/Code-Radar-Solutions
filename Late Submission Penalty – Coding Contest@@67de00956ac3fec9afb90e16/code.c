#include <stdio.h>

int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay, int dueMonth, int dueYear)
 {

    if (dueDay!=subDay && dueMonth == subMonth && subYear == dueYear) 
    {
        return ((subDay-dueDay)*10);
    }
    else if ((subMonth > dueMonth && subYear == dueYear)||(subDay==dueDay) ){
            return ((subMonth - dueMonth) * 200); 
        }
        
    else if (subYear > dueYear) //baaki conditions se no frq hame 
    {
        return 5000;
    }
    else //time pr eturn ki 
    {
        return 0;
    }
      
    }