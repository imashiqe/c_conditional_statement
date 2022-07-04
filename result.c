#include <stdio.h>

int main(){
    
    int day;
    printf("Enter Roll Number (1-10 :");
    scanf("%d" , &day);
    switch (day)
    {
    case 1 : printf("  Physics  | Failed Retake | 24 Date  \n");
        break;
    case 2 : printf(" chemistry | Failed Retake | 24 Date  \n");
        break;
    case 3 : printf("  Math |  Failed Retake | 24 Date \n");
        break;
    case 4 : printf("  Ict  | Failed Retake | 24 Date \n");
        break;
    case 5 : printf(" biology |  Failed Retake | 24 Date \n");
        break;
    case 6 : printf(" higher math |  Failed Retake | 24 Date\n");
        break;
    case 7 : printf(" higher math |  Failed Retake | 24 Date\n");
        break;
    case 8 : printf(" higher math |  Failed Retake | 24 Date\n");
        break;
    case 9 : printf("  higher math |  Failed Retake | 24 Date\n");
        break;
    case 10 : printf("  higher math |  Failed Retake | 24 Date\n");
        break;
    
    default:
        printf("Not a valid Roll! \n");
    }
     
    return 0;
}