#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	cin.tie(nullptr);	// cin �Է� ���� ����
	cout.tie(nullptr);	// cout ��� ���� ����
	ios_base::sync_with_stdio(false);	//	C ��Ʈ���� C++ ��Ʈ�� ����ȭ ����
										//	printf, cout ���� ��� �Ұ�
										// cin, cout �� ��� ��

	char num[100];
	scanf("%s", num);
	printf("%s", num);
	
	return 0;
}