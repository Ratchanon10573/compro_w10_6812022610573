#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter number os students: ");
    scanf("%d", &n);

    float score[n];

    printf("Enter students %d scores (one per line):\n", n);
    for(i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%f", &score[i]);
        sum += score[i];
    }
    average = sum / n;
    printf("Number of students = %d\n", n);
    printf("Average score = %.2f\n", average);

    return 0;
}