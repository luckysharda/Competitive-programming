#include<bits/stdc++.h>
using namespace std;

int firstuniquechar(string s) {

	unorderd_map<char, int>cnt;
	int n =  s.size();

	for (int i = 0; i < n; i++) {
		cnt[s[i]]++;

	}

	for (int i = 0; i < n; i++) {
		if (cnt[s[i]] == 1) {
			return i;

		}
	}
	return -1;

}

int main() {
	string s;
	cin >> s;
	firstuniquechar(s);

}