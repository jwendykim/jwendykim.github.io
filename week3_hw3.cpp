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
			return "없음";
	}
};

int main() {

	cout << "공부할 때 어떤 방식으로 하나요? 아래 항목 중 선택해 숫자(정수)를 입력하고 엔터를 치세요." << endl;
	cout << "1. 토론, 브레인 스토밍, 시합 등 능동적으로 공부합니다." << endl;
	cout << "2. 다양한 예시를 들어 논리적인 흐름의 자료로 공부합니다." << endl;
	cout << "3. 미개척 분야이지만 대중적으로 인기있는 분야의 소재를 공부합니다." << endl;
	cout << "4. 개념적인 내용을 다양한 관점에서 여러가지 예시로 공부합니다." << endl;
	MBTI ombti;
	//ombti.API();
	
	cin >> ombti.num;
	cout << "당신은 " << ombti.num << "번을 선택하였습니다." << endl;
	cout << "당신의 MBTI는 " << ombti.API() << "입니다." << endl;

	return 0;
}