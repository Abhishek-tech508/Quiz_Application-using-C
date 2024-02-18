#include <stdio.h>
#include <stdbool.h>
void Wrong_Calculation();
void Right_Calculation();
int Wrong_Question = 0;
int your_Score = 0;
int right_Question = 0;

int main()
{

    printf(" Quiz Game\n");
    int quizStart;
    printf("Do You Want To Stat The Quiz \n");
    printf("If You Want To Start The Quiz Then Press The 7\n");
    printf("If You Don't Want To Play Then Press 8\n");
    scanf("%d", &quizStart);
    int correctAnswer;

    int your_Score = 0;
    int you_Attempt_Question;
    int right_Question = 0;
    int Wrong_Question = 0;

    while (quizStart == 7)
    {
        printf("A) 1.Which of the following civilizations flourished between the rivers, the Tigris and the Euphrates?\n");
        printf("1) Mesopotamian Civilization\n");
        printf("2) Harrapan Civilization\n");
        printf("3) Chinese Civilization\n");
        printf("4) Egyptian Civilization\n");
        printf("Enter Your Answer :");
        scanf("%d", &correctAnswer);
        if (correctAnswer == 1)
        {
            Right_Calculation();
        }
        else
        {
            Wrong_Calculation();
        }

        printf("B) Great Pyramid of Giza’s is located in which country?\n");
        printf("1) Iraq\n");
        printf("2) Egypt\n");
        printf("3) Lebanon\n");
        printf("4)Israel\n");
        printf("Enter Your Answer :");
        scanf("%d", &correctAnswer);
        if (correctAnswer == 2)
        {
            Right_Calculation();
        }
        else
        {
            Wrong_Calculation();
        }

        printf("C) The upper part of Mesopotamia was known as __:\n");
        printf("1) Assyria\n");
        printf("2) Akkad\n");
        printf("3) Babylon\n");
        printf("4) Sumer\n");
        printf("Enter Your Answer :");
        scanf("%d", &correctAnswer);
        if (correctAnswer == 1)
        {

            Right_Calculation();
        }
        else
        {
            Wrong_Calculation();
        }

        break;
    }
    if (quizStart == 8)
    {
        printf("End Your Quiz\n");
    }

    return 0;
}
void Wrong_Calculation()
{
    printf("\nYour Answer Is Wrong\n");
    right_Question += 0;
    printf("Right Question Is : %d\n", right_Question);
    Wrong_Question += 1;
    printf("Wrong Question Is : %d\n", Wrong_Question);
    your_Score += 0;
    printf("Your Score Is : %d\n", your_Score);
    printf("\n\n\n");
}

void Right_Calculation()
{
    printf("\nYour Answer Is Right\n");
    right_Question += 1;
    printf("Right Question Is : %d\n", right_Question);
    Wrong_Question += 0;
    printf("Wrong Question Is : %d\n", Wrong_Question);
    your_Score += 5;
    printf("Your Score Is : %d\n", your_Score);
    printf("\n\n\n");
}
