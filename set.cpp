/*#include<iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;
int main() {
	multiset<int> N;
	string cmd;
	vector<int> v;
	typedef vector<int>::iterator it;
	int x, n, k = 0;
	cin >> n;
	while (cin >> cmd >> x&&k<n) {
		if(cmd=="add"){
		
			N.insert(x);v.push_back(x);
			cout << N.count(x) << endl;
			k++;
		}
		if (cmd == "del") {
			
			int sum = N.count(x);
			N.erase(x);
			cout << sum << endl;
			k++;
		}
		if (cmd == "ask"){
			int sum = 0, s = N.count(x);
			for (int i = 0;i<v.size();++i) {
				if (v[i] == x)sum++;
			}
			if (sum != 0)cout << "1 ";
			else cout << "0 ";
			cout << s << endl;
			k++;
		}
	}
	return 0;
}*/