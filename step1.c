#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)

{

    int choice; // 고르세요
        // 상품 정보
    char* names[] = { "콜라", "휴지", "몬스터", "레쓰비"};
    int prices[] = { 1300, 1000, 2000, 500 };


    printf("자판기\n");

    printf("1. %s - %d원\n", names[0], prices[0]);

    printf("2. %s - %d원\n", names[1], prices[1]);

    printf("3. %s - %d원\n", names[2], prices[2]);

    printf("4. %s - %d원\n", names[3], prices[3]);

    printf("------\n");

    printf("번호를 입력하세요");
    scanf("%d", &choice);    // 입력할 번호 
    
    //선택
    printf("\n[%s]를 선택하셨습니다. %d원입니다.\n",

        names[choice - 1], prices[choice - 1]);

    return 0;

}


