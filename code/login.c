#include <stdio.h>

int main() {
    char id[20];
    int password;

    // 저장된 계정 정보
    int correct_password = 1234;

    printf("아이디를 입력하세요: ");
    scanf("%s", id);

    printf("비밀번호를 입력하세요: ");
    scanf("%d", &password);

    // 로그인 확인
    if (password == correct_password) {
        printf("로그인 성공!\n");
        printf("환영합니다, %s 님.\n", id);
    } else {
        printf("로그인 실패했습니다. 비밀번호가 올바른지 확인해주세요.\n");
    }

    return 0;
}
