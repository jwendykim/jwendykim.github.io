# jwendykim.github.io
```
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char Delimiter) {
	istringstream iss(str);             // istringstream에 str을 담는다.
	string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

	vector<string> result;

	// istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
	while (getline(iss, buffer, Delimiter)) {
		result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
	}

	return result;
}

int main() {

	locale::global(locale("korean"));
	vector<wstring> v;
	wstring num;

	std::ifstream ifs("mbtidata1.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));

	vector<string> result = split(content, '\n');
	for (int i = 0;i < result.size();i++) {
		bool found = result[i].find("ESFJ") != std::string::npos;
		bool found1 = result[i].find("김지윤") != std::string::npos;
		if (found && !found1) {
			cout << result[i] << endl;
		}
	}

	return 0;

}

```
![UML](https://user-images.githubusercontent.com/127014108/224701153-5537fc4a-f409-47d2-9288-85cdf68a502b.jpg)

