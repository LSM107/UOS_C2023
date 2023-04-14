#include <stdio.h>

// 최소공배수를 구하기 위한 최대공약수를 반환하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

// 최대공약수 파라미터 필요 (1)
void gcd_parameter(int a, int b) {

    int a1 = a;
    int b1 = b;

    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    printf("%d와 %d의 최대공약수: %d\n",a1, b1, a);
}

// 최대공약수 파라미터 없음 (2)
void gcd_no_parameter(void) {
    
    int a, b;

    printf("최대공약수를 구할 두 자연수를 입력하세요.\n");
    printf("첫 번째 자연수: "); scanf_s("%d", &a);
    printf("두 번째 자연수: "); scanf_s("%d", &b);


    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    printf("두 자연수의 최대공약수: %d\n", a);
}

// 최소공배수 파라미터 필요
void lcm_parameter(int a, int b) {
    printf("%d와 %d의 최소공배수: %d\n",a, b,  a * b / gcd(a, b));
}

// 최소공배수 파라미터 없음
void lcm_no_parameter(void) {

    int a, b;

    printf("최소공배수를 구할 두 자연수를 입력하세요.\n");
    printf("첫 번째 자연수: "); scanf_s("%d", &a);
    printf("두 번째 자연수: "); scanf_s("%d", &b);

    printf("두 자연수의 최대공배수: %d\n", a * b / gcd(a, b));
}

// 소수 판별 함수 파라미터 필요
int is_prime_parameter(int n) {
    if (n <= 1) {
        printf("%d는 소수가 아닙니다.\n", n);
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d는 소수가 아닙니다.\n", n);
            return 0;
        }
    }
    printf("%d는 소수입니다.\n", n);
    return 0;
}

// 소수 판별 함수 파라미터 없음
int is_prime_no_parameter(void) {

    int n;

    printf("소수를 판별할 수를 입력하세요: "); scanf_s("%d", &n);

    if (n <= 1) {
        printf("%d는 소수가 아닙니다.\n", n);
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d는 소수가 아닙니다.\n", n);
            return 0;
        }
    }
    printf("%d는 소수입니다.\n", n);
    return 0;
}

