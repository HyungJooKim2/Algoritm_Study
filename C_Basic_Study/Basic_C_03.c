/*
continue : ���ǽ�����
break : ���� loop ����
Return : ���α׷� ����
call by reference
call by value
*/

#define _CRT_SECURE_NO_WARNINGS 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 11
//���� �������� �ٲٱ�
//1-100 ���� �� ��ġ�� �ʴ� ���� 10�� ���� 
void bubble(int x[], int n)
{
    int i, j;
    int temp;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--)
        {
            if (x[j - 1] >= x[j]) continue;
            temp = x[j - 1];      /* x[j-1]�� x[j]�� ��ȯ */
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
    } // �ߺ��� ���� ���� 
    i = 0;
    do {
        if (arr[i] == arr[i + 1]) arr[i + 1] = rand() % 100 + 1;
        i++;
    } while (i <= MAX);
    // ���� ������ ���
    bubble(arr, 11); //�����Ʈ
    i = 0;
    do {
        if (arr[i] == arr[i + 1]) arr[i + 1] = arr[i + 2];
        i++;
    } while (i <= 11);
    printf("\n ������ ��� �ζǹ�ȣ�� \n");
    for (i = 0; i < 10; i++)
    {
        printf("%5d, ", arr[i]);
    }
    printf("\n"); return 0;
}