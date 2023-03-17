# include <stdio.h>

int main(void) {

	char name[15], department[30];
	int birth_date, student_id;

	printf("이름을 입력하세요: ");
	scanf_s("%s", name, sizeof(name));

	printf("생년월일을 입력하세요: ");
	scanf_s("%d", &birth_date);

	printf("학번을 입력하세요: ");
	scanf_s("%d", &student_id);

	printf("학과를 입력하세요: ");
	scanf_s("%s", department, sizeof(department));
	
	printf("\n\n- 이름 : %s\n- 생년월일 : %d\n- 학번 : %d\n- 학과명 : %s\n", name, birth_date, student_id, department);
}