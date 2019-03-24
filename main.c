//작성자 : 201920981 최현우
//작성날짜 : 03/23/2019
#include <stdio.h>
#include <stdlib.h>

int main()
{
    short x; //정수 변수 선언
    int y; //정수 변수 선언

    printf("short 변수에 저장할 값 : "); //입력 안내 메세지 출력
    scanf("%d", &x); //정수값을 받아서 x에 저장

    printf("int 변수에 저장할 값 : "); //입력 안내 메세지 출력
    scanf("%d", &y); //정수값을 받아서 y에 저장

    printf("\n"); //줄바꿈
    printf("short 변수에 실제 저장된 값 : %d\n",x); //결과값 출력
    printf("int 변수에 실제 저장된 값 : %d",y); //결과값 출력

    return 0;
}
