#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string current[3];
string mission[3];
int str_cnt;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string currentTime;
	string missionStart;
	cin >> currentTime >> missionStart;
	char * cur = new char[currentTime.size()];
	char * mis = new char[missionStart.size()];
	strcpy(cur, currentTime.c_str());
	strcpy(mis, missionStart.c_str());

	char* tok1 = strtok(cur, ":");
	while (tok1 != NULL) {
		current[str_cnt++] = string(tok1);
		tok1 = strtok(NULL, ":");
	}
	str_cnt = 0;
	char* tok2 = strtok(mis, ":");
	while (tok2 != NULL) {
		mission[str_cnt++] = string(tok2);
		tok2 = strtok(NULL, ":");
	}

	int curSec = 0;
	int misSec = 0;
	int s = 3600;
	for (int i = 0; i < 3; i++) {
		curSec += atoi(current[i].c_str()) * s;
		misSec += atoi(mission[i].c_str()) * s;
		s /= 60;
	}
	string remainTime;
	int remainSec;
	if (curSec < misSec) {
		remainSec = misSec - curSec;
	}
	else {
		remainSec = ((24 * 60 * 60) - curSec) + misSec;
	}
	int hour = remainSec / 3600;
	int minute = (remainSec % 3600) / 60;
	int second = remainSec % 60;
	if (hour == 0) {
		remainTime.append("00:");
	}
	else if ((hour / 10) == 0) {
		remainTime.append("0").append(to_string(hour)).append(":");
	}
	else {
		remainTime.append(to_string(hour)).append(":");
	}

	if (minute == 0) {
		remainTime.append("00:");
	}
	else if ((minute / 10) == 0) {
		remainTime.append("0").append(to_string(minute)).append(":");
	}
	else {
		remainTime.append(to_string(minute)).append(":");
	}

	if (second == 0) {
		remainTime.append("00");
	}
	else if ((second / 10) == 0) {
		remainTime.append("0").append(to_string(second));
	}
	else {
		remainTime.append(to_string(second));
	}
	
	cout << remainTime << '\n';
	return 0;
}