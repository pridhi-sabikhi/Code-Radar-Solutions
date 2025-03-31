#include <stdio.h>

int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay, int dueMonth, int dueYear) {
    // If the submission year is greater than the due year
    if (subYear > dueYear) {
        return 5000; // Fixed penalty for different year
    }
    // If the submission year is the same as the due year
    else if (subYear == dueYear) {
        // If the submission month is greater than the due month
        if (subMonth > dueMonth) {
            return (subMonth - dueMonth) * 200; // Monthly penalty
        }
        // If the submission month is the same as the due month
        else if (subMonth == dueMonth) {
            // If the submission day is greater than the due day
            if (subDay > dueDay) {
                return (subDay - dueDay) * 10; // Daily penalty
            }
        }
    }
    // If the submission is on or before the due date
    return 0; // No penalty
}

//or 
// #include <stdio.h>

// int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay, int dueMonth, int dueYear)
//  {

//     if (subDay > dueDay && dueMonth == subMonth && subYear == dueYear) 
//     {
//         return ((subDay-dueDay)*10);
//     }
//     else if ((subMonth > dueMonth && subYear == dueYear)||(subDay==dueDay) ){
//             return ((subMonth - dueMonth) * 200); 
//         }
        
//     else if (subYear > dueYear) //baaki conditions se no frq hame 
//     {
//         return 5000;
//     }
//     else //time pr eturn ki 
//     {
//         return 0;
//     }
      
//     }