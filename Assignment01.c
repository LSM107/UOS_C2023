# include <stdio.h>

int main(void) {

	char name[15], department[30];
	int birth_date, student_id;

	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%s", name, sizeof(name));

	printf("��������� �Է��ϼ���: ");
	scanf_s("%d", &birth_date);

	printf("�й��� �Է��ϼ���: ");
	scanf_s("%d", &student_id);

	printf("�а��� �Է��ϼ���: ");
	scanf_s("%s", department, sizeof(department));
	
	printf("\n\n- �̸� : %s\n- ������� : %d\n- �й� : %d\n- �а��� : %s\n", name, birth_date, student_id, department);
}