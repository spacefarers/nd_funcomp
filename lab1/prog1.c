//
// Created by Michael Yang on 1/22/24.
//

#include <stdio.h>

int main() {
    int touchdowns, extra_points, field_goals, safeties;
    // get user input for touchdowns, extra points, field goals, and safeties
    printf("Enter the number of touchdowns: ");
    scanf("%d", &touchdowns);
    printf("Enter the number of extra points: ");
    scanf("%d", &extra_points);
    printf("Enter the number of field goals: ");
    scanf("%d", &field_goals);
    printf("Enter the number of safeties: ");
    scanf("%d", &safeties);
    // calculate total score
    int total_score = touchdowns * 6 + extra_points + field_goals * 3 + safeties * 2;
    printf("The total score is %d\n", total_score);
    return 0;
}