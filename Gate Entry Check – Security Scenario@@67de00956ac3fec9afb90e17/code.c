#include <stdio.h>

int gateOpen(int threshold, int entryTimes[], int n) {
    int onTimeCount = 0;

    // Count the number of attendees who entered on time (entry time <= 0)
    for (int i = 0; i < n; i++) {
        if (entryTimes[i] <= 0) {
            onTimeCount++;
        }
    }

    // Check if the count of on-time attendees meets or exceeds the threshold
    return (onTimeCount >= threshold) ? 1 : 0;
}

