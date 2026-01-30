#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)

{

    int choice; // 고르세요
    
    char* names[] = { "콜라", "휴지", "몬스터", "레쓰비" };  // 상품 정보
    int prices[] = { 1300, 1000, 2000, 500 };    // 상품 가격


    printf("자판기\n");

    printf("1. %s - %d원\n", names[0], prices[0]);

    printf("2. %s - %d원\n", names[1], prices[1]);

    printf("3. %s - %d원\n", names[2], prices[2]);

    printf("4. %s - %d원\n", names[3], prices[3]);

    printf("------\n");

    do {          // 올바른 번호를 입력 할때까지 반복
        printf("번호를 입력하세요 (1~4): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
        }

    } while (choice < 1 || choice > 4);


    //선택
    printf("\n[%s]를 선택하셨습니다. %d원입니다.\n",

        names[choice - 1], prices[choice - 1]);


    int money = 0;  // 넣을 금액 0으로 초기화 

    int price = prices[choice - 1];

    printf("돈을 투입하세요.\n");

    while (money < price)     // 누적금액이 상품 금액보다 적을 경우 

    {

        int input;   // 사용자가 넣은 돈

        printf("투입 (현재: %d원, 필요: %d원): ", money, price); //현재 상황
        //지금 넣은 돈 // 필요한 돈 
        scanf("%d", &input);

        money += input;    // 현재 누적 돈 + 사용자가 넣은 돈 

        if (money < price)     // 누적 금액이 상품 가격보다 적다면

        {

            printf("→ %d원 부족합니다.\n", price - money);       //적을경우 ??원 부족 합니다

        }

    }

    printf("\n금액이 충분합니다!\n");     // 조건이 만족 했을 경우 금액이 충분합니다 

    int change = money - price;   // 잔돈 = 자판기에 넣은 (누적)금액 - 상품 금액

    printf("구매 완료\n");

    printf("[%s]가 나옵니다.\n", names[choice - 1]); // [상품명]이 나옵니다 

    if (change > 0)    // 거스름돈이 (0 초과일 경우) 있을 경우

    {

        printf("거스름돈: %d원\n", change);  // 거스름돈: ?? 

    }

    printf("감사합니다!\n");   // 거스름돈이 없을 경우, 감사합니다!
}