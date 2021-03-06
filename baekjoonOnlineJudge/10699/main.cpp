#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

using namespace std;

// 현재시간을 string type으로 return하는 함수
const std::string currentDateTime() {
	time_t     now = time(0); //현재 시간을 time_t 타입으로 저장
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
//	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct); YYYY-MM-DD.HH:mm:ss 형태의 스트링
	strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);

	return buf;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cout << currentDateTime() << '\n';

	return 0;
}