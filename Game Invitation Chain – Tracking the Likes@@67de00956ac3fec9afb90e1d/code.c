int totalLikes(int n) {
    int totalLikes = 0;
    int invitesToday = 5; // Initial invites on Day 1

    for (int day = 1; day <= n; day++) {
        // Calculate how many people liked the game today
        int likesToday = invitesToday / 2; // Half of the invites like the game
        totalLikes += likesToday; // Add to total likes

        // Calculate invites for the next day
        invitesToday = likesToday * 3; // Each person who liked invites 3 new friends
    }

    return totalLikes; // Return the total number of likes after n days
}