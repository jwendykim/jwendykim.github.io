#include <iostream>
#include <string>
using namespace std;

class MBTI {
public:
	MBTI() { }
	~MBTI() { }
	int num;

	string API()
	{
		if (num == 1)
			return "ESTJ";
		else if (num == 2)
			return "ISTJ";
		else if (num == 3)
			return "ENTJ";
		else if (num == 4)
			return "INTJ";
		else
			return "����";
	}
};

int main() {

	cout << "������ �� � ������� �ϳ���? �Ʒ� �׸� �� ������ ����(����)�� �Է��ϰ� ���͸� ġ����." << endl;
	cout << "1. ���, �극�� �����, ���� �� �ɵ������� �����մϴ�." << endl;
	cout << "2. �پ��� ���ø� ��� ������ �帧�� �ڷ�� �����մϴ�." << endl;
	cout << "3. �̰�ô �о������� ���������� �α��ִ� �о��� ���縦 �����մϴ�." << endl;
	cout << "4. �������� ������ �پ��� �������� �������� ���÷� �����մϴ�." << endl;
	MBTI ombti;
	//ombti.API();
	
	cin >> ombti.num;
	cout << "����� " << ombti.num << "���� �����Ͽ����ϴ�." << endl;
	cout << "����� MBTI�� " << ombti.API() << "�Դϴ�." << endl;

	return 0;
}