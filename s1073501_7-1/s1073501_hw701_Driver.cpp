#include"s1073501_MyArray.h"
#include"s1073501_MyArray.cpp"
#include<iostream>
using namespace std;
//template class  MyArray <char>;
//template class  MyArray <int>;
int main() {
	MyArray<char> n1(3, 'a'), n2(5, 'b'), n3(10, 'c'), n4, n5, n6(8,'D');
	cout << "This is s1073501's Driver.cpp" << endl;
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "n3:" << n3 << endl;
	n5 = n1 + n2;
	cout<< "n5 = n1 + n2 :" << n5 << endl;
	n1.resize(1, 'x');
	n2.resize(20, 'y');
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "n1's size:" << n1.getSize() << endl;
	cout << endl;
	n4 = n1 + n2;
	cout << "n4's size:" << n4.getSize() << endl;
	
	cout << "n4 = n1 + n2 :" << n4 << endl;
	n4 += n3;//n4=n4+n3(size:10+10)
	cout << "n4 += n3:" << n4 << endl;
	cout << endl;
	cout << "n1's size:" << n1.getSize() << endl;
	n1.clear();
	cout << "n1's size:" << n1.getSize() << endl;
	n1.isEmpty();
	cout << endl;
	cout << "n6's size: " << n6.getSize() << endl;
	n6.isEmpty();
	cout << endl;
	cout << "n6's capacity: " << n6.getCapacity() << endl;
	cout << endl;
	n6.shrink_to_fit();
	cout << "n6's capacity: " << n6.getCapacity() << endl;
	cout << endl;
	try {
		n2.at(1);//size 20
		cout << "n2's index is within the range" << endl;
	}
	catch(const out_of_range& oor){
		cerr << "n2's index" << oor.what() << endl;
		cout << endl;
	}
	try {
		n1.at(20);//size 0
		cout << "index is on the range" << endl;
	}
	catch (const out_of_range& oor) {
		cerr << "n1's index" << oor.what() << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}