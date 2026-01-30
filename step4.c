do {
    printf("번호를 입력하세요 (1~4): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("잘못된 입력입니다. 다시 입력하세요.\n");
    }

} while (choice < 1 || choice > 4);
