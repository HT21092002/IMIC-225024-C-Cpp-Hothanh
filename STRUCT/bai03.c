#include<stdio.h>
struct student {
	char name[30];
	int age;
};
void input(struct student* s,int n) {

}
void main() {
	struct student s1;
	struct student* p1;
	p1 = &s1;
	printf("Nhap vao ten:");
	fgets(s1.name, sizeof(s1.name), stdin);
	s1.name[strcspn(s1.name, "\n")] = '\0';
	printf("Nhap vao tuoi:");
	scanf_s("%d", &s1.age);
	p1->age = 30;
	printf("%d", s1.age);
}