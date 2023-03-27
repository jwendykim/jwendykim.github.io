#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string s1("I have a dream");
	string s2("Computer Programming");
	cout << s1.append(s2) << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.append(s2, 9, 7) << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.append("NEW", 3) << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.append(3, 'N') << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.assign(3, 'N') << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.assign(s2, 9, 7) << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.assign("NEWNEW", 3) << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.assign("NEWNEW", 3) << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.assign(3, 'N') << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.at(0) << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.length() << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.size() << endl;

	s1 = ("I have a dream");
	s2 = ("Computer Programming");
	cout << s1.capacity() << endl;

	return 0;
}