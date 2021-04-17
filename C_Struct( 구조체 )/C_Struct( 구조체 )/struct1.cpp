#include <iostream>

using namespace std;

int main() {

	struct MyStruct 
	{
		string name;
		string position;
		float height;
		float weight;
	};

	MyStruct A[2]{
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	cout << A[0].name << endl;

	return 0;
}