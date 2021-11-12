#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	cin.tie(nullptr);	// cin 입력 버퍼 비우기
	cout.tie(nullptr);	// cout 출력 버퍼 비우기
	ios_base::sync_with_stdio(false);	//	C 스트림과 C++ 스트림 동기화 차단
										//	printf, cout 동시 사용 불가
										// cin, cout 만 써야 함

	char num[100];
	scanf("%s", num);
	printf("%s", num);
	
	return 0;
}