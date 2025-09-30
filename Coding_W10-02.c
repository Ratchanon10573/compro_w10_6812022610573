#include <stdio.h>

int main() {
    float scores[3][3];  // [นักเรียน][วิชา]
    float avg[3] = {0};  // ค่าเฉลี่ยแต่ละวิชา
    char subjects[3][20] = {"Math", "Physics", "Chemistry"};
    int i, j;

    // รับคะแนนนักเรียนทีละคน ทีละวิชา
    for (i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("  %s: ", subjects[j]);
            scanf("%f", &scores[i][j]);
        }
        printf("\n");
    }

    // คำนวณค่าเฉลี่ยของแต่ละวิชา
    for (j = 0; j < 3; j++) {
        float sum = 0;
        for (i = 0; i < 3; i++) {
            sum += scores[i][j];
        }
        avg[j] = sum / 3.0;
    }

    // แสดงตารางคะแนน
    printf("\nScore Table:\n");
    printf("%-10s %-10s %-10s %-10s\n", "Student", "Math", "Physics", "Chemistry");
    for (i = 0; i < 3; i++) {
        printf("%-10d", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%-10.2f", scores[i][j]);
        }
        printf("\n");
    }

    // แสดงค่าเฉลี่ยของแต่ละวิชา
    printf("\nAverage per subject:\n");
    for (j = 0; j < 3; j++) {
        printf("%-10s: %.2f\n", subjects[j], avg[j]);
    }

    return 0;
}
