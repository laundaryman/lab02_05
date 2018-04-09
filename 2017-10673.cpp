#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
vector<int> num;

using namespace std;
int main() {
	int n;
	while (cin >> n) {
		num.push_back(n);
	}
	sort(num.begin(), num.end(),greater<int>());
	cout << "ordered array" << endl;
	for (auto i : num) {
		cout << i << " ";
	}
	/*branch*/
}