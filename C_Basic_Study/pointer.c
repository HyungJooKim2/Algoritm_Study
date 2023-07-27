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
	//포인터는 해당 데이터가 저장된 메모리의 시작 주소를 의미
	int 철수 = 1;

	printf("철수의 주소 : %d 암호 : %d\n", &철수, 철수);
	int* 미션맨 = &철수; //포인터 변수 선언 후 철수의 주소값 저장

	printf("미션맨이 가져간 철수의 주소와 값 : %d, 암호 : %d\n", 미션맨, *미션맨);

	*미션맨 = *미션맨 * 3; //역참조 하여 미션맨이 값을 바꿈(주소는 동일)
	printf("미션맨이 바꾼 주소와 값 : %d, 암호 : %d\n", 미션맨, *미션맨);

	int* 스파이 = 미션맨; //스파이가 철수의 주소를 가져감
	printf("\n .. 스파이가 미션 수행하는 중 ..\n");
	//스파이 = &철수;
	*스파이 = *스파이 - 2; //철수
	printf("스파이가 가져간 철수의 주소와 값 : %d 암호 : %d\n", 스파이, *스파이);
	printf("바뀐 철수의 주소와 값 : %d, 암호 : %d", &철수, 철수);
	*/
	/*
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr; //??? ptr과 arr의 값이 어떻게 똑같아지는거지?..
	printf("arr, ptr 모두 가장 첫번째 주소를 가르킴: %d %d\n", arr, ptr);
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}
	for (int i = 0; i < 3; i++) {        //== *(arr+i);
		printf("배열 arr[%d]의 값 : %d\n", i, *(ptr+i));
	}
	*/
	/*
	// SWAP
	int a = 10;
	int b = 20;
	// a와 b 의 값을 바꾼다.
	swap(a, b);
	printf("%d %d\n", a, b);
	//주소값을 넘기면??
	swap_abdr(&a, &b);
	printf("%d %d", a, b);
	*/
	//배열일 떄 어떤 하나의 주소만 넘겨도 다른 값에 접근할 수 있다.
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
	long startTime = 0;        //게임 시작 시간
	long totalElapsedTime = 0; //총 경과 시간
	long prevElapsedTime = 0;  //직전 경과 시간 (최근에 물을 준 시간 간격)
	int num;                   //몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData(); //게임 초기값 설정

	// ----- 게임 세팅 -------
	cursor = arrayFish; //cursor == arrayFish 배열
	startTime = clock(); //현재 시간을 millisecond (100분의 1초 반환)

	// ----- 게임 시작 -------
	while (1) {
		printFishese();  //1번 ~ 6번 까지의 값(물) 출력
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf("%d", &num);

		//입력값 체크
		if (num < 1 || num >6) {
			printf("\n 입력값이 잘못되었습니다.\n");
			break;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; //총 경과 시간 (현재 시간 - 시작 시간) / 1000 단위로 나누어 초로 바꿔줌)
		printf("총 경과 시간 : %ld 초 \n", totalElapsedTime);

		//마지막으로 물 준 시간 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		//어항의 물을 감소 (증발)
		decreaseWater(prevElapsedTime);

		//사용자가 입력한 어항에 물을 준다.
		//1. 어항의 물이 0 이면? 물을 주지 않는다.
		if (cursor[num - 1] <= 0) {
			printf("%d 번 물고기는 이미 죽어 물을 주지 않습니다\n", num);
		}
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d 번 어항에 물을 줍니다\n\n", num);
			cursor[num - 1] += 1;
		}

		//레벨업을 할 건지 확인 (레벨업은 20초마다 한번씩 수행)
		if (totalElapsedTime / 20 > level - 1)
		{
			//레벨업
			level++; // level : 1 -> level : 2 -> level : 3
			printf("  *** 축 레벨업 ! 기존 %d 레벨에서 %d 레벨로 업그레이드 *** \n\n", level - 1, level);

			//최종 레벨 5
			if (level == 5) {
				printf("\n\n 축하합니다, 최고 레벨을 달성하였습니다. 게임을 종료합니다.");
				exit(0);
			}
		}
	}
	if (checkFishAlive() == 0) {
		//물고기 모두 죽음
		printf("모든 물고기가 죽었습니다.\n");
		exit(0);
	}
	else {
	}  //최소 한마리 살아있음
	printf("물고기가 아직 살아 있어요.\n");
	prevElapsedTime = totalElapsedTime;
	//10초 -> 15초 (5초 prevTime -> 15초로 바꿈) 
	return 0;
}

void initData()
{
	level = 1; //초기 게임 레벨 1 (1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; // 0~5 번째에 해당 하는 값을 100으로 세팅(물 높이 = 100)
	}
}

void printFishese()
{
	printf("%2d번%2d번%2d번%2d번%2d번%2d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("%4d", arrayFish[i]); //1번 ~ 100번 물고기의 값(물) 출력 
	}
	printf("\n\n");
}

//Call by Value -> 원래의 값이 아닌 값을 복사하여 가져옴
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
//Call by Reference -> 복사하지 않고 직접 주소를 통해 값을 가져옴
void swap_abdr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 1 * (int)elapsedTime); //레벨 * 1 * 지난 시간 만큼 빼줌
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0; //0보다 낮아지면 0으로 고정시킴 계속 감소 xx 
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return i; // 참 True
		}
	}
}

void changeArray(int* ptr) {
	ptr[2] = 50;
}
