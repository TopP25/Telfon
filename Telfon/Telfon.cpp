
#include "Stud.h"
#include <vector>
using namespace std;

class MyClass
{
    vector<Stud> studens;

public:
	MyClass(int count) {

		for (int i = 0; i < count; i++) {
			studens.push_back(Stud());
		}
	}
	void printStudents() {
		for (auto s : studens) {
			cout << "NAme: " << s.getName() << endl;
			cout << "Age: " << s.getAge() << endl;
		}
	}
	~MyClass() {

	}
};

int main(){
	setlocale(LC_ALL, "rus");
	MyClass my(6);
	my.printStudents();
}