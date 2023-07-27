#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#define SIZE 3
#define MAXLEN 40
#define matrix(name, r, c) (*(name+r*col+c))
void encode(char* s);
void decode(char* s);

void C_04_main(void)
{
	/*
	char c, str[MAXLEN + 3];
	do {
		do {
			printf("\n Encode or Decode or QUIT (E/D/Q)?");
			c = toupper(_getche());
		} while (c != 'E' && c != 'D' && c != 'Q');
		if (c == 'Q') break;
			printf("\n Enter number :");
			str[0] = MAXLEN + 1;
			_cgets(str);
			if (c == 'E') { encode(str + 2);
				printf("\n Encode number : %s", str + 2);
		}
			else {
				decode(str + 2);
					printf("\n Decode number : %s", str + 2);
			}
	} while (1);
		printf("\n Good luck to you!!!\n");
		*/
		/*
			static int x[5] = { 100, 200, 300, 400, 500 };
			int i, * px;
			px = x; // ?번지값 출력
				printf("px=x px=%p\n", px);
			px = &x[0];
			printf("px=&x[10] px=%p\n", px);
			printf("\n\ni?? px+i?? *(px+i)? px[i] x[i] \n\n");
			for (i = 0; i <= 4; i++)
				printf("%d %9p %9d %9d %9d \n\n", i, px + i, *(px + i), px[i], x[i]);
				*/	//(번지값은 2byte씩 증가)
				/*
				int i, x[3] = { 100, 200, 300 };
				for (i = 0; i < 3; i++)
					printf("%d", x[i]);
				for (i = 0; i < 3; i++)
					printf("%d", x[i]);
				for (i = 1; i <= 3; i++)
					printf("%d", (i - 1)[x]);
				printf("\n");

			*/
			/*
			void plus(int* pm1, int* pm2, int* result, int row, int col);
			{
				int matrix1[][SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
				int matrix2[][SIZE] = { 9, 8, 7, 3, 2, 1, 6, 5, 4 };
				int result[SIZE][SIZE], i, j;
				plus((int*)matrix1, (int*)matrix2, (int*)result, SIZE, SIZE);
				for (i = 0; i < SIZE; i++) {
					for (j = 0; j < SIZE; j++)
						printf("%3d", result[i][j]);
					printf("\n");
				}
			}
			*/
}

void encode(char* s)
{
	int i = -1;
	static char* code = "5792134608";
	while (s[++i])s[i] = code[s[i] - '0'];
}
void decode(char* s)
{
	int i = -1;
	static char* code = "8435607192";
	while (s[++i])s[i] = code[s[i] - '0'];
}
