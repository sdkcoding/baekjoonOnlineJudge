#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

using namespace std;

// ����ð��� string type���� return�ϴ� �Լ�
const std::string currentDateTime() {
	time_t     now = time(0); //���� �ð��� time_t Ÿ������ ����
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
//	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct); YYYY-MM-DD.HH:mm:ss ������ ��Ʈ��
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