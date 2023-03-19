# include <stdio.h>

int main(void) {

	char name[15], department[30]; // 이름과 학과명은 char 변수형으로 설정
	int birth_date, student_id; // 생년월일과 학번은 숫자로만 이루어져 있기 때문에 int 변수형으로 설정
	
	printf("이름을 입력하세요: "); // 이름을 입력하라고 화면에 출력
	scanf_s("%s", name, sizeof(name)); // 이름을 입력받고 name 변수에 이를 저장, 크기는 변수를 정의할 때의 크기로 설정

	printf("생년월일을 입력하세요: "); // 생년월일을 입력하라고 화면에 출력
	scanf_s("%d", &birth_date); // 생년월일을 입력받고 name 변수에 이를 저장

	printf("학번을 입력하세요: "); // 학번을 입력하라고 화면에 출력
	scanf_s("%d", &student_id); // 학번을 입력받고 student_id 변수에 이를 저장

	printf("학과를 입력하세요: "); // 학과를 입력하라고 화면에 출력
	scanf_s("%s", department, sizeof(department));// 학과를 입력받고 department 변수에 이를 저장, 크기는 변수를 정의할 때의 크기로 설정ㅁㄴㄴ
	
	printf("\n\n- 이름 : %s\n- 생년월일 : %d\n- 학번 : %d\n- 학과명 : %s\n", name, birth_date, student_id, department);
	// 이름, 생년월일, 학번, 학과명을을 차례대로 양식에 맞게 출력
	
}
