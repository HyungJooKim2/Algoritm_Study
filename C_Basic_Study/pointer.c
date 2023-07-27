#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <ctype.h>
#include <time.h>


void initData();
void printFishese();
void decreaseWater(long elapsedTime);
void swap(int a, int b);
void swap_abdr(int* a, int* b);
void changeArray(int* ptr);
int level;
int arrayFish[6];
int* cursor;

int Pointer_main(void) {

	/*
	//�����ʹ� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ� �ǹ�
	int ö�� = 1;

	printf("ö���� �ּ� : %d ��ȣ : %d\n", &ö��, ö��);
	int* �̼Ǹ� = &ö��; //������ ���� ���� �� ö���� �ּҰ� ����

	printf("�̼Ǹ��� ������ ö���� �ּҿ� �� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	*�̼Ǹ� = *�̼Ǹ� * 3; //������ �Ͽ� �̼Ǹ��� ���� �ٲ�(�ּҴ� ����)
	printf("�̼Ǹ��� �ٲ� �ּҿ� �� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	int* ������ = �̼Ǹ�; //�����̰� ö���� �ּҸ� ������
	printf("\n .. �����̰� �̼� �����ϴ� �� ..\n");
	//������ = &ö��;
	*������ = *������ - 2; //ö��
	printf("�����̰� ������ ö���� �ּҿ� �� : %d ��ȣ : %d\n", ������, *������);
	printf("�ٲ� ö���� �ּҿ� �� : %d, ��ȣ : %d", &ö��, ö��);
	*/
	/*
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr; //??? ptr�� arr�� ���� ��� �Ȱ������°���?..
	printf("arr, ptr ��� ���� ù��° �ּҸ� ����Ŵ: %d %d\n", arr, ptr);
	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("������ ptr[%d]�� �� : %d\n", i, ptr[i]);
	}
	for (int i = 0; i < 3; i++) {        //== *(arr+i);
		printf("�迭 arr[%d]�� �� : %d\n", i, *(ptr+i));
	}
	*/
	/*
	// SWAP
	int a = 10;
	int b = 20;
	// a�� b �� ���� �ٲ۴�.
	swap(a, b);
	printf("%d %d\n", a, b);
	//�ּҰ��� �ѱ��??
	swap_abdr(&a, &b);
	printf("%d %d", a, b);
	*/
	//�迭�� �� � �ϳ��� �ּҸ� �Ѱܵ� �ٸ� ���� ������ �� �ִ�.
	int arr2[3] = { 10, 20, 30 };
	changeArray(arr2);
	changeArray(&arr2[0]);
	changeArray(arr2);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}
	return 0;
}

int game_Main(void) {
	long startTime = 0;        //���� ���� �ð�
	long totalElapsedTime = 0; //�� ��� �ð�
	long prevElapsedTime = 0;  //���� ��� �ð� (�ֱٿ� ���� �� �ð� ����)
	int num;                   //�� �� ���׿� ���� �� ������, ����� �Է�
	initData(); //���� �ʱⰪ ����

	// ----- ���� ���� -------
	cursor = arrayFish; //cursor == arrayFish �迭
	startTime = clock(); //���� �ð��� millisecond (100���� 1�� ��ȯ)

	// ----- ���� ���� -------
	while (1) {
		printFishese();  //1�� ~ 6�� ������ ��(��) ���
		printf("�� �� ���׿� ���� �ֽðھ��?");
		scanf("%d", &num);

		//�Է°� üũ
		if (num < 1 || num >6) {
			printf("\n �Է°��� �߸��Ǿ����ϴ�.\n");
			break;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; //�� ��� �ð� (���� �ð� - ���� �ð�) / 1000 ������ ������ �ʷ� �ٲ���)
		printf("�� ��� �ð� : %ld �� \n", totalElapsedTime);

		//���������� �� �� �ð� ���ķ� �帥 �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);

		//������ ���� ���� (����)
		decreaseWater(prevElapsedTime);

		//����ڰ� �Է��� ���׿� ���� �ش�.
		//1. ������ ���� 0 �̸�? ���� ���� �ʴ´�.
		if (cursor[num - 1] <= 0) {
			printf("%d �� ������ �̹� �׾� ���� ���� �ʽ��ϴ�\n", num);
		}
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d �� ���׿� ���� �ݴϴ�\n\n", num);
			cursor[num - 1] += 1;
		}

		//�������� �� ���� Ȯ�� (�������� 20�ʸ��� �ѹ��� ����)
		if (totalElapsedTime / 20 > level - 1)
		{
			//������
			level++; // level : 1 -> level : 2 -> level : 3
			printf("  *** �� ������ ! ���� %d �������� %d ������ ���׷��̵� *** \n\n", level - 1, level);

			//���� ���� 5
			if (level == 5) {
				printf("\n\n �����մϴ�, �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�.");
				exit(0);
			}
		}
	}
	if (checkFishAlive() == 0) {
		//����� ��� ����
		printf("��� ����Ⱑ �׾����ϴ�.\n");
		exit(0);
	}
	else {
	}  //�ּ� �Ѹ��� �������
	printf("����Ⱑ ���� ��� �־��.\n");
	prevElapsedTime = totalElapsedTime;
	//10�� -> 15�� (5�� prevTime -> 15�ʷ� �ٲ�) 
	return 0;
}

void initData()
{
	level = 1; //�ʱ� ���� ���� 1 (1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; // 0~5 ��°�� �ش� �ϴ� ���� 100���� ����(�� ���� = 100)
	}
}

void printFishese()
{
	printf("%2d��%2d��%2d��%2d��%2d��%2d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("%4d", arrayFish[i]); //1�� ~ 100�� ������� ��(��) ��� 
	}
	printf("\n\n");
}

//Call by Value -> ������ ���� �ƴ� ���� �����Ͽ� ������
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
//Call by Reference -> �������� �ʰ� ���� �ּҸ� ���� ���� ������
void swap_abdr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 1 * (int)elapsedTime); //���� * 1 * ���� �ð� ��ŭ ����
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0; //0���� �������� 0���� ������Ŵ ��� ���� xx 
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return i; // �� True
		}
	}
}

void changeArray(int* ptr) {
	ptr[2] = 50;
}
