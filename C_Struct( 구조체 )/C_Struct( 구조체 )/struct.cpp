#include <iostream>

using namespace std;

int main() {
	//����ü : �ٸ� ���������� ���Ǵ� �������� ����
	//cf) �迭 : ���� ���������� ����

	/*struct MyStruct
	{
		string name;
		string position;
		float height;
		float  weight;
	};*/

	/*MyStruct A;
	A.name = "Son";
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;*/

	struct MyStruct
	{
		string name;
		string position;
		float height;
		float  weight;
	} B;

	MyStruct A = {
		"Son",
		"Striker",
		183,
		77
	};

	/*cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;*/

	B = {

	}; // B Struct�� 0���� �ʱ�ȭ �ȴ�. 

	cout << B.height << endl;

	return 0;
}