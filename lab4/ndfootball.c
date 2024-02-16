// Fundamentals of Computing
// Created by Michael Yang on 2/12/24.
// Football Q&A

#include <stdio.h>
#include <stdbool.h>

// Arrays to store the wins and losses for each year
int wins[] =
        {6, 8, 6, 8, 5, 5, 6, 6, 8, 7, 4, 6,
         7, 7, 6, 7, 8, 6, 3, 9, 9, 10, 8, 9,
         10, 7, 9, 7, 5, 9, 10, 6, 6, 3, 6, 7,
         6, 6, 8, 7, 7, 8, 7, 9, 8, 7, 8, 9,
         9, 10, 4, 7, 7, 9, 9, 8, 2, 7, 6, 5,
         2, 5, 5, 2, 9, 7, 9, 8, 7, 8, 10, 8,
         8, 11, 10, 8, 9, 11, 9, 7, 9, 5, 6, 7,
         7, 5, 5, 8, 12, 12, 9, 10, 10, 11, 6, 9,
         8, 7, 9, 5, 9, 5, 10, 5, 6, 9, 10, 3,
         7, 6, 8, 8, 12, 9, 8, 10, 4, 10, 12, 11,
         10, 11, 9, 10};

int losses[] =
        {3, 1, 2, 0, 3, 4, 1, 0, 1, 0, 1, 0,
         0, 0, 2, 1, 1, 1, 1, 0, 0, 1, 1, 1,
         0, 2, 1, 1, 4, 0, 0, 2, 2, 5, 3, 1,
         2, 2, 1, 2, 2, 0, 2, 1, 2, 2, 0, 0,
         0, 0, 4, 2, 2, 0, 1, 2, 8, 3, 4, 5,
         8, 5, 5, 7, 1, 2, 0, 2, 2, 2, 1, 2,
         3, 0, 2, 3, 3, 1, 3, 4, 2, 6, 4, 5,
         5, 6, 6, 4, 0, 1, 3, 3, 1, 1, 5, 3,
         3, 6, 3, 7, 3, 6, 3, 7, 6, 3, 3, 9,
         6, 6, 5, 5, 1, 4, 5, 3, 8, 3, 1, 2,
         2, 2, 4, 3};

// Function prototypes
int get_wins(int year);
int get_losses(int year);
void display_records(int year);
void wins_for_range(int start, int end);
void years_wins_lt_losses();
void years_wins_gt_prev_five();

// helper function to get wins
int get_wins(int year) {
    return wins[year - 1900];
}

// helper function to get losses
int get_losses(int year) {
    return losses[year - 1900];
}

// Display the records for a given year
void display_records(int year) {
    printf("Year: %d, Wins: %d, Losses: %d\n", year, get_wins(year), get_losses(year));
}

// Get total wins between a range of years
void wins_for_range(int start, int end) {
    int total_wins = 0;
    for (int i = start; i <= end; i++) {
        total_wins += get_wins(i);
    }
    printf("Total wins between %d and %d: %d\n", start, end, total_wins);
}

// Get years where wins are less than losses
void years_wins_lt_losses() {
    for (int i = 1900; i <= 2023; i++) {
        if (get_wins(i) < get_losses(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


// Get years where wins are greater than the max wins of the previous 5 years
void years_wins_gt_prev_five() {
    for (int i = 1900; i <= 2023; i++) {
        int max_wins = 0;
        for (int j = i - 5; j < i; j++) {
            // Skip years for comparisons if they are not in the range of the array
            if (j < 1900) continue;
            int wins_current = get_wins(j);
            max_wins = (wins_current > max_wins) ? wins_current : max_wins;
        }
        if (get_wins(i) > max_wins) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    while (true) {
        // Options for the user
        printf("1. Display Records for a given year\n");
        printf("2. Get Number of wins between a range of years\n");
        printf("3. Get years where wins are less than losses\n");
        printf("4. Get years that ND won more than all 5 prior years\n");
        printf("5. Exit\n");

        int choice;
        int year;
        int start, end;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Switch statement to handle the user's choice
        switch (choice) {
            case 1:
                printf("Enter the year: ");
                scanf("%d", &year);
                display_records(year);
                break;
            case 2:
                printf("Enter the start and end year consecutively: ");
                scanf("%d %d", &start, &end);
                wins_for_range(start, end);
                break;
            case 3:
                years_wins_lt_losses();
                break;
            case 4:
                years_wins_gt_prev_five();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}