#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double x, y;
		cin >> x >> y;
		int cnt = 0;
		// compute the chances of getting the needed value
		int temp = (6 - (x + y));
		// check if the chance of getting a value is equal 0
		if (temp == 0) {
		    // if yes, then print 0 and continue the loop to skip the code blocks below
			cout << 0 << '\n';
			continue;
		}
		// otherwise, do the manual division step-by-step and get the decimal places needed (truncate) in 6 decimal places
		// multiply the chances of getting the sum by 10
		temp *= 10;
		// create vector 'v' to store the numbers after the decimal point
		vector<int> v;
		// create a while-loop condition up to 6 (truncate up to 6 decimal places)
		while (cnt < 6) {
		    // find the quotient of the current 'temp' and 6
			int d = temp / 6;
			// store the quotient in vector 'v'
			v.emplace_back(d);
			// subtract the product of 'd' and 6 from 'temp'
			temp -= (6 * d);
			// multiply 'temp' by 10 again to make it greater than 6 (normal division)
			temp *= 10;
			// increment 'cnt'
			cnt++;
		}
		// print the '0' and decimal point (initial)
		cout << "0.";
		// print the values after the decimal point
		for (int i = 0; i < (int) v.size(); i++) {
			cout << v[i];
		}
		cout << '\n';
	}
	return 0;
}
