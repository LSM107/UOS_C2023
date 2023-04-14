#include <stdio.h>

// �ּҰ������ ���ϱ� ���� �ִ������� ��ȯ�ϴ� �Լ�
int gcd(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

// �ִ����� �Ķ���� �ʿ� (1)
void gcd_parameter(int a, int b) {

    int a1 = a;
    int b1 = b;

    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    printf("%d�� %d�� �ִ�����: %d\n",a1, b1, a);
}

// �ִ����� �Ķ���� ���� (2)
void gcd_no_parameter(void) {
    
    int a, b;

    printf("�ִ������� ���� �� �ڿ����� �Է��ϼ���.\n");
    printf("ù ��° �ڿ���: "); scanf_s("%d", &a);
    printf("�� ��° �ڿ���: "); scanf_s("%d", &b);


    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    printf("�� �ڿ����� �ִ�����: %d\n", a);
}

// �ּҰ���� �Ķ���� �ʿ�
void lcm_parameter(int a, int b) {
    printf("%d�� %d�� �ּҰ����: %d\n",a, b,  a * b / gcd(a, b));
}

// �ּҰ���� �Ķ���� ����
void lcm_no_parameter(void) {

    int a, b;

    printf("�ּҰ������ ���� �� �ڿ����� �Է��ϼ���.\n");
    printf("ù ��° �ڿ���: "); scanf_s("%d", &a);
    printf("�� ��° �ڿ���: "); scanf_s("%d", &b);

    printf("�� �ڿ����� �ִ�����: %d\n", a * b / gcd(a, b));
}

// �Ҽ� �Ǻ� �Լ� �Ķ���� �ʿ�
int is_prime_parameter(int n) {
    if (n <= 1) {
        printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
            return 0;
        }
    }
    printf("%d�� �Ҽ��Դϴ�.\n", n);
    return 0;
}

// �Ҽ� �Ǻ� �Լ� �Ķ���� ����
int is_prime_no_parameter(void) {

    int n;

    printf("�Ҽ��� �Ǻ��� ���� �Է��ϼ���: "); scanf_s("%d", &n);

    if (n <= 1) {
        printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
            return 0;
        }
    }
    printf("%d�� �Ҽ��Դϴ�.\n", n);
    return 0;
}

