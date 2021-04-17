#include <iostream>

using namespace std;

int main() {
	//구조체 : 다른 데이터형이 허용되는 데이터의 집합
	//cf) 배열 : 같은 데이터형의 집합

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

	}; // B Struct는 0으로 초기화 된다. 

	cout << B.height << endl;

	return 0;
}