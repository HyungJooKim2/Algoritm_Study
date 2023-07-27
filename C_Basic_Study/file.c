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
	파일 입출력
	파일에 어떤 데이터를 저장
	파일에 저장된 데이터를 불러오ㄱ;
	*/

	/*
	//파일 쓰기
	char line[MAX];
	FILE* file = fopen("c:\\test1.txt", "wb"); //r: 읽기 전용, w: 쓰기 전용, a: 이어쓰기, t: 텍스트, b: 바이너리 데이터
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	fputs("fputs를 이용해서 글을 적어볼게요\n", file);
	fputs("잘 적히는지 확인해주세요\n", file);
	*/
	/*
	//파일 읽기
	FILE* file = fopen("c:\\test1.txt", "rb");
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	char line[MAX];
	while (fgets(line, MAX, file) != NULL) {
		printf("%s", line);
	}
	*/
	/*
	//또다른 파일 쓰기 및 읽기
	int num[6] = { 0,0,0,0,0,0 }; //추첨번호
	int bonus = 0; //보너스 번호
	char str1[MAX];
	char str2[MAX];
	FILE* file = fopen("c:\\test1.txt", "rb"); //쓰기일 땐 wb로
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	/*
	//로또 추첨 번호 저장 -> 또다른 파일 쓰기
	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "보너스번호", 7);
	*/
	/*
		//또다른 파일 읽기
		fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
		printf("%s %d %d %d %d %d %d\n",str1, num[0], num[1], num[2], num[3], num[4], num[5]);
		fscanf(file, "%s %d", str2, &bonus);
		printf("%s %d\n", str2, bonus);

		//파일을 열고 나서 닫지 않을 시 문제가 생길 수 있어 항상 닫아야함
		fclose(file);
		*/
}