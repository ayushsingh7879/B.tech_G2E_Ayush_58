#include <stdio.h>

int main() {
  
    float s1, s2, s3, s4, s5;
    float sum, percentage;
 
    printf("Enter marks for 5 subjects (out of 100 each):\n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    sum = s1 + s2 + s3 + s4 + s5;

    percentage = (sum / 500) * 100;

    printf("\n--- Results ---\n");
    printf("Total Sum: %.2f\n", sum);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
