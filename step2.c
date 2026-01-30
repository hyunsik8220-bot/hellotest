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