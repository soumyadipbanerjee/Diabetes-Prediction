#include <stdio.h>

int predictDiabetes() {
    int age, glucoseLevel, familyHistory;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your fasting glucose level: ");
    scanf("%d", &glucoseLevel);

    printf("Do you have a family history of diabetes? (1 for yes, 0 for no): ");
    scanf("%d", &familyHistory);

    if (age > 30 && glucoseLevel > 120 && familyHistory) {
        printf("Based on the input, there is a higher likelihood of diabetes.\n");
        return 1;
    } else {
        printf("Based on the input, diabetes is less likely.\n");
        return 0; 
    }
}

int main() {
  
    int hasDiabetes = predictDiabetes();

    if (hasDiabetes) {
        printf("Please consult with a healthcare professional for further evaluation.\n");
    } else {
        printf("Continue monitoring your health, and consult with a healthcare professional if needed.\n");
    }

    return 0;
}
