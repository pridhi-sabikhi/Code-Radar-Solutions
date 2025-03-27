int mountainPeak(int N) {
    char str[12]; // Enough to hold up to 10 digits + null terminator
    sprintf(str, "%d", N); // Convert integer to string

    int length = strlen(str);
    
    // Check if the number has at least 3 digits
    if (length < 3) {
        return -1;
    }

    int i = 0;

    // Ascending part
    while (i < length - 1 && str[i] < str[i + 1]) {
        i++;
    }

    // Check if we have a peak
    if (i == 0 || i == length - 1) {
        return -1; // No peak or peak at the ends
    }

    // Descending part
    while (i < length - 1 && str[i] > str[i + 1]) {
        i++;
    }

    // If we reached the end, we have a valid mountain
    if (i == length - 1) {
        return str[i - 1] - '0'; // Return the peak digit as an integer
    }

    return -1; // Not a mountain
}