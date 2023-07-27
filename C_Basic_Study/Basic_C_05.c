#define _CRT_SECURE_NO_WARNINGS 
#define HEIGHT 5
#define WIDTH 10
char enemy[HEIGHT][WIDTH] =
{ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 1, 1, 1, 0, 0, 1, 0, 1},
{0, 0, 0, 0, 0, 0, 0, 1, 0, 1}, {1, 0, 0, 0, 0, 0, 0, 1, 0, 0},
{1, 0, 1, 1, 1, 0, 0, 0, 0, 0} };
#define STUDENT 5
#define DEPT 5

int jum[STUDENT + 1][DEPT + 1];
char name[STUDENT + 1][20];
int sum[STUDENT + 1];
int ave[STUDENT + 1];
#include <stdio.h>
void C_05_main(void) {

    /*
    static char days[8][4];
    static char* months[13];
    int i;
    strcpy(days[1], "SUN");
    strcpy(days[2], "MON");
    strcpy(days[3], "TUE");
    strcpy(days[4], "WED");
    strcpy(days[5], "THU");
    strcpy(days[6], "FRI");
    strcpy(days[7], "SAT");
    months[1] = "January";
    months[2] = "February";
    months[3] = "March";
    months[4] = "April";
    months[5] = "May";
    months[6] = "June";
    months[7] = "July";

    for (i = 1; i <= 7; i++)
       printf("%-4s", days[i]);
    printf("\n");
    for (i = 1; i <= 12; i++)
       printf("%-10s", months[i]);
    printf("\n");
    */
    /*
    char friend1[HEIGHT][WIDTH];
    int x, y;
    for (y = 0; y < HEIGHT; y++)
       for (x = 0; x < WIDTH; x++)
          friend1[y][x] = '_';
    printf("Enter coordinats in form x, y (4,2).\n");
    printf("Use negative numbers to quit.\n");
    while (x >= 0)
    {
       for (y = 0; y < HEIGHT; y++)
       {
          for (x = 0; x < WIDTH; x++)
             printf("%c", friend1[y][x]);
          printf("\n\n");
       }
       printf("coordinates: ");
       scanf("%d, %d", &x, &y);
       if (enemy[y][x] == 1)friend1[y][x] = '*'; // '■';
       else friend1[y][x] = '@'; //'□';
    }
    return 0;
    */
    int i;
    for (i = 1; i <= STUDENT; i++)
    {
        printf("%d 이름입력 :", i);
        scanf("%s", &name[i]);
        printf(" 국어, 영어, 수학, 국사, 과학 성적입력\n");
        scanf("%d %d %d %d %d", &jum[i][0], &jum[i][1], &jum[i][2], &jum[i][3], &jum[i][4]);
    }
    printf("Input complete!!\n");

    for (i = 1; i <= STUDENT; i++)
    {
        sum[i] = jum[i][0] + jum[i][1] + jum[i][2] + jum[i][3] + jum[i][4];
        ave[i] = (int)sum[i] / 5;
    }
    printf("순번 이 름 국어, 영어, 수학, 국사, 과학, 총점, 평균\n");
    printf("===================================================\n");

    for (i = 1; i <= STUDENT; i++)
    {
        printf("%2d %6s %4d %4d %4d %4d %4d %4d %4d \n",
            i, name[i], jum[i][0], jum[i][1], jum[i][2], jum[i][3], jum[i][4], sum[i], ave[i]);
    }
    printf("===================================================\n");
    printf("이하여백 \n");
    return 0;
}