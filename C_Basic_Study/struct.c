#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "struct.h"

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; //���� ��ü ����
};
/*
typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company
} GAME_INFO;
*/
int struct_main(void) {
	/*
	���� ���
	�̸� : ��������
	�߸ų⵵ : 2017��
	���� : 50��
	���ۻ� : ����ȸ��
	*/

	//����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";
	//printf("���Ӹ� : %s\n", gameInfo1.name);

	//����ü �迭
	struct GameInfo gameInfo2 = { "�ʵ�����",2017,100,"�ʵ�ȸ��" };
	//printf("���Ӹ� : %s\n", gameInfo2.name);


	//����ü ������
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	//printf("�������� ���� : %s\n", (*gamePtr).name);
	printf("�����Ͱ� ���� �̸� : %s\n", gamePtr->name);

	//���� ��ü �Ұ�
	gameInfo1.friendGame = &gameInfo2;
	printf("���� ��ü �̸� : %s\n", gameInfo1.friendGame->name);

	//typedef
	//�ڷ����� ���� ����
	int i = 1;
	typedef int ����;
	���� �������� = 3; //int i = 3;

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ� ����";

	return 0;


}