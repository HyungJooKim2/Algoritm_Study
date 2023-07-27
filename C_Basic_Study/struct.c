#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "struct.h"

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; //연관 업체 게임
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
	게임 출시
	이름 : 나도게임
	발매년도 : 2017년
	가격 : 50원
	제작사 : 나도회사
	*/

	//구조체 사용
	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";
	//printf("게임명 : %s\n", gameInfo1.name);

	//구조체 배열
	struct GameInfo gameInfo2 = { "너도게임",2017,100,"너도회사" };
	//printf("게임명 : %s\n", gameInfo2.name);


	//구조체 포인터
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	//printf("포인터의 정보 : %s\n", (*gamePtr).name);
	printf("포인터가 가진 이름 : %s\n", gamePtr->name);

	//연관 업체 소개
	gameInfo1.friendGame = &gameInfo2;
	printf("연관 업체 이름 : %s\n", gameInfo1.friendGame->name);

	//typedef
	//자료형의 별명 지정
	int i = 1;
	typedef int 정수;
	정수 정수변수 = 3; //int i = 3;

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글 게임";

	return 0;


}