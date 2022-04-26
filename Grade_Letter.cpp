#include <iostream>
using namespace std;
int main()
{
	int mark;
	cout << "Enter student's grade :";
	cin >> mark;
	if (mark >= 0 && mark < 60)
		cout << "F\n\'Failed\'";
	else if (mark > 59 && mark < 63)
		cout << "D-\n\'Passed\'";
	else if (mark > 62 && mark < 67)
		cout << "D\n\'Passed\'";
	else if (mark > 66 && mark < 70)
		cout << "D+\n\'Passed\'";
	else if (mark > 69 && mark < 73)
		cout << "C-\n\'Passed\'";
	else if (mark > 72 && mark < 77)
		cout << "C\n\'Passed\'";
	else if (mark > 76 && mark < 80)
		cout << "C+\n\'Passed\'";
	else if (mark > 79 && mark < 83)
		cout << "B-\n\'Passed\'";
	else if (mark > 82 && mark < 87)
		cout << "B\n\'Passed\'";
	else if (mark > 86 && mark < 90)
		cout << "B+\n\'Passed\'";
	else if (mark > 89 && mark < 93)
		cout << "A-\n\'Passed\'";
	else if (mark > 92 && mark < 97)
		cout << "A\n\'Passed\'";
	else if (mark > 96 && mark < 101)
		cout << "A+\n\'Passed\'";
	else
		cout << "The grade is Out Of Range!";
}
