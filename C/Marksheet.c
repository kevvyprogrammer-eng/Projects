// Marksheet Program

#include <stdio.h>
#include <string.h>

#define students 3
#define subjects 3

// Function 1 = To calculate Average
void avgcalc(float marks[students][subjects], float avg[students])
{
    for (int i = 0; i < students; i++)
    {
        float sum = 0;
        for (int j = 0; j < subjects; j++)
        {
            sum += marks[i][j];
        }

        avg[i] = sum / subjects;
    }
}

// Function 2 = To declare topper 
int findtopper (float avg[students]){
    int topIndex = 0;                          // assume student 0 is topper first
    for (int i = 1; i < students; i++) {
        if (avg[i] > avg[topIndex]) {
            topIndex = i;                      // found someone better, update
        }
    }
    return topIndex;
}


int main()
{

    // Student Array
    char names[students][50] = {"Keval", "Arpit", "Prince"};
    // Student Marks Array
    float marks[students][subjects] = {
        {62.0, 92.0, 93.2}, // Keval 
        {46.0, 65.0, 45.3}, // Arpit
        {66.2, 95.1, 95.1}}; // Prince 

    // Array Of one average per student
    float avg[students];

    // To call Function 1
    avgcalc(marks, avg);

    // Display Part
    printf("===========================================================\n");

    for (int i = 0; i < students; i++)
    {
        printf("Student : %s\n", names[i]);

        printf("Marks   : ");
        for (int j = 0; j < subjects; j++)
        {
            printf("%.1f  ", marks[i][j]); // print each subject mark
        }
        printf("\n");

        printf("Average : %.2f\n", avg[i]);

        // CONDITIONAL — pass or fail
        if (avg[i] >= 63.0)
        {
            printf("Result  : PASS\n");
        }
        else
        {
            printf("Result  : FAIL\n");
        }        

        printf("===========================================================\n");
    
    }

    // To find topper and to call Function 2
    int topperId = findtopper(avg);
    printf("\nTOPPER: %s (Average: %.2f)\n", names[topperId], avg[topperId]);

    return 0 ;

}
