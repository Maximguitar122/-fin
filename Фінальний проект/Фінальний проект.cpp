

#include <iostream>
using namespace std;
struct  Teacher {
	int age;
	string name;
	string surname;
	int num_of_group;
	int password;
};
struct Student {
	string name;
	int age;
};



int search(Teacher input, Teacher db1, Teacher db2) {
	if (input.age == db1.age && input.name == db1.name && input.surname == db1.surname && input.num_of_group == db1.num_of_group) {
		return 1;
	}
	if (input.age == db2.age && input.name == db2.name && input.surname == db2.surname && input.num_of_group == db2.num_of_group) {
		return 1;
	}

	return 0;
}

int plan(int password, int num_of_group){
	int bd_password = 342;
	int bd_num_of_group = 1;


	int bd_password2= 342;
	int bd_num_of_group2= 2;

	if (password == bd_password && num_of_group == bd_num_of_group) {
		return 1;
	}
	if (password == bd_password2&& num_of_group == bd_num_of_group2){
		return 2;
	}

	return 0;
}
Student group1[10] = { {"Petro", 17}, {"Olena", 16}, {"Alex", 18}, {"Andrew", 16}, {"Yehor", 17} };
int count1 = 5;
Student group2[10] = { {"Petro", 19}, {"Anton", 16}, {"Yaroslav", 18}, {"Maxym", 18} };
int count2 = 4;


void addStudents(int num_of_group) {
	if (num_of_group == 1 && count1 < 10) {
		cout << "Enter student's name: ";
		cin >> group1[count1].name;
		cout << "Enter student's age: ";
		cin >> group1[count1].age;
		count1++; 
		cout << "Student successfully added to group 1!\n";
	}
	else if (num_of_group == 2 && count2 < 10) {
		cout << "Enter student's name: ";
		cin >> group2[count2].name;
		cout << "Enter student's age: ";
		cin >> group2[count2].age;
		count2++;
		cout << "Student successfully added to group 2!\n";
	}
	else {
		cout << "Помилка: група заповнена або неправильний номер групи!\n";
	}
}
void showStudents(int group) {
	if (group == 1) {
		cout << "\nStudents of group 1:\n";
		for (int i = 0; i < count1; i++) {
			cout << i + 1 << ") Name: " << group1[i].name << ",Age:" << group1[i].age << "\n";
		}
	}
	else if (group == 2) {
		cout << "\nStudents of group 2:\n";
		for (int i = 0; i < count2; i++) {
			cout << i + 1 << ") Name: " << group2[i].name << ", Age: " << group2[i].age << "\n";
		}
	}
}


int main()
{
	cout << "=================================================================================================================================\n";
	cout<<"                                          STUDENT BASE\n";
	cout << "=================================================================================================================================\n";
	cout << "Login for teacher\n";



	Teacher db1 = { 35, "Maxym", "Schevchyk", 1 };
	Teacher db2 = { 40, "Alex", "Schevchenko", 2 };
	Teacher input;

	

	cout << "Enter your age\n";
	cin >> input.age;
	cout << "Enter your name\n";
	cin >> input.name;
	cout << "Enter your surname\n";
	cin >> input.surname;
	cout << "Enter your group number\n";
	cin >> input.num_of_group;


	int result = search(input, db1, db2);
	if (result == 1) {
		cout << "                                   Office found\n";
		
	}
	
	else {
		cout << "                                  Office no found\n";
		return 0;
	}
    int password;
	
	cout << "Enter a password\n";
	cin >> password;
	

	int output = plan(password, input.num_of_group);
	if (output == 1) {
		cout << " Learn programming fundamentals:\n";
		cout << "1. Data types (strings, numbers, booleans)\n";
		cout << "2. Conditional statements (if/else)\n";
		cout << "3. Loops (for, while)\n";
		cout << "4. Functions and how to use them\n";
		cout << "5. Practice: simple calculator or (Guess the number) game\n";
	}
	if (output == 2) {
		cout << " Strengthen coding skills and build small projects:\n";
		cout << "1. Review of basic concepts\n";
		cout << "2. Arrays and dictionaries (maps)\n";
		cout << "3. Object-oriented programming (classes, objects)\n";
		cout << "4. File handling (read/write files)\n";
		cout << "5. Building a GUI or simple web page\n";
		cout << "6. Project: To-Do List app or simple game\n";
	}


	int choice;
	do {
		cout << "\nWhat do you want to do?\n";
		cout << "\n1. Add a student\n";
		cout << "\n2. Show students\n";
		cout << "3. Exit\n";
		cin >> choice;
		switch (choice) {
		case 1:
			addStudents(input.num_of_group);
			break;
		case 2:
			showStudents(input.num_of_group);
			break;
		case 3:
			cout << "Goodbye!\n";
			break;
		default:
			cout << "Invalid choice. Try again.\n";
		}
	}while (choice != 3);

}

