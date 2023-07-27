/*
continue : 조건식으로
break : 현재 loop 종료
Return : 프로그램 종료
call by reference
call by value
*/

#define _CRT_SECURE_NO_WARNINGS 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 11
//내림 차순으로 바꾸기
//1-100 숫자 중 겹치지 않는 숫자 10개 선발 
void bubble(int x[], int n)
{
    int i, j;
    int temp;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--)
        {
            if (x[j - 1] >= x[j]) continue;
            temp = x[j - 1];      /* x[j-1]과 x[j]를 교환 */
            x[j - 1] = x[j];
            x[j] = temp;
        }
    }
}
int C_03_main(int argc, char* argv[])
{
    int i, temp;
    int arr[MAX];
    srand(time(NULL));
    for (i = 0; i < MAX; i++)
    {
        temp = rand() % 100 + 1;
        arr[i] = temp;
    } // 중복된 값은 제거 
    i = 0;
    do {
        if (arr[i] == arr[i + 1]) arr[i + 1] = rand() % 100 + 1;
        i++;
    } while (i <= MAX);
    // 순서 정열후 출력
    bubble(arr, 11); //버블소트
    i = 0;
    do {
        if (arr[i] == arr[i + 1]) arr[i + 1] = arr[i + 2];
        i++;
    } while (i <= 11);
    printf("\n 오늘의 희망 로또번호는 \n");
    for (i = 0; i < 10; i++)
    {
        printf("%5d, ", arr[i]);
    }
    printf("\n"); return 0;
}