#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define MAX 10000

char* getname();
int file_main(void) {
	char* str;
	str = getname();
	printf("hi\n");
	printf("%s\n", str);

	return 0;
}

char* getname()
{
	char name[128];
	printf("Input name");
	scanf("%s", name);
	return name;

}

int main_file(void) {
	/*
	���� �����
	���Ͽ� � �����͸� ����
	���Ͽ� ����� �����͸� �ҷ�����;
	*/

	/*
	//���� ����
	char line[MAX];
	FILE* file = fopen("c:\\test1.txt", "wb"); //r: �б� ����, w: ���� ����, a: �̾��, t: �ؽ�Ʈ, b: ���̳ʸ� ������
	if (file == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	fputs("fputs�� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ�����ּ���\n", file);
	*/
	/*
	//���� �б�
	FILE* file = fopen("c:\\test1.txt", "rb");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	char line[MAX];
	while (fgets(line, MAX, file) != NULL) {
		printf("%s", line);
	}
	*/
	/*
	//�Ǵٸ� ���� ���� �� �б�
	int num[6] = { 0,0,0,0,0,0 }; //��÷��ȣ
	int bonus = 0; //���ʽ� ��ȣ
	char str1[MAX];
	char str2[MAX];
	FILE* file = fopen("c:\\test1.txt", "rb"); //������ �� wb��
	if (file == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	/*
	//�ζ� ��÷ ��ȣ ���� -> �Ǵٸ� ���� ����
	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "���ʽ���ȣ", 7);
	*/
	/*
		//�Ǵٸ� ���� �б�
		fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
		printf("%s %d %d %d %d %d %d\n",str1, num[0], num[1], num[2], num[3], num[4], num[5]);
		fscanf(file, "%s %d", str2, &bonus);
		printf("%s %d\n", str2, bonus);

		//������ ���� ���� ���� ���� �� ������ ���� �� �־� �׻� �ݾƾ���
		fclose(file);
		*/
}