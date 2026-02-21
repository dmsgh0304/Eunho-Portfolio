#include <stdio.h>

int main() {
    char name[20];
    int age;

    printf("이름 입력: ");
    scanf("%s", name);

    printf("나이 입력: ");
    scanf("%d", &age);

    printf("\n=== 사용자 정보 ===\n");
    printf("이름: %s\n", name);
    printf("나이: %d\n", age);

    return 0;
}
