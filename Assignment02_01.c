#include <stdio.h>

void change_notation(int a, int b) {
    if (a == 0) {
        return;
    } // 변환할 값으로 0이 들어오면 종료

    change_notation(a / b, b);
    // 다음 자릿수를 재귀적으로 처리
    // 몫이 없다는 것은, 다음 자릿수가 없다는 것

    int c = a % b;
    if (c < 10) {
        printf("%d", c);
    }
    else {
        printf("%c", c - 10 + 'A');
    }
    // 낮은 자릿수 부터 처리
}

int main() {
    int a, b;

    printf("변환할 10진수 입력: ");
    scanf_s("%d", &a);

    printf("변환할 진법 입력 (2-16): ");
    scanf_s("%d", &b);

    printf("%d의 %d진수 변환 값: ", a, b);
    if (a == 0) {
        printf("%d", 0);
    } // 입력받은 숫자가 0인 경우 0을 반환

    else if (a < 0) {
        printf("-");
        change_notation(-a, b);
    } // 입력받은 숫자가 음수인 경우 -를 취한 후 함수를 사용

    else {
        change_notation(a, b);
    } // 입력받은 숫자가 양수인 경우 바로 함수를 사용
}
