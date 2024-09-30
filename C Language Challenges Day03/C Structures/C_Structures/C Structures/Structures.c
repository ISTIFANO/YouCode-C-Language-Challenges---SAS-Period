// C program to return a structure from a function
#include <stdio.h>

struct student {
	char name[20];
	int age;
	char Prenom;
};

// function to return a structure
struct student get_student_data()
{
	struct student s;

	printf("Enter name: ");
	scanf("%s", s.name);
	printf("Enter age: ");
	scanf("%d", &s.age);
	printf("Enter Prenom: ");
	scanf("%s", &s.Prenom);

	return s;
}

int main()
{
	// structure variable s1 which has been assigned the
	// returned value of get_student_data
	struct student s1 = get_student_data();
	// displaying the information
	printf("Name: %s\n", s1.name);
	printf("Age: %d\n", s1.age);
	printf("Prenom: %.s\n", s1.Prenom);

	return 0;
}
