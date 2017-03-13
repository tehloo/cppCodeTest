#include <iostream>
#include <vector>

using namespace std;

bool find_sum(int* i, int sum) {
	cout << "array size = " << sizeof(*i) << "/ sum = " << sum << endl;
	int i_max = sizeof(*i) - 1;
	int i_min = 0;

	while (i_min < i_max) {
		int result = i[i_min] + i[i_max];
		cout << "comparing " << i[i_min] << " + " << i[i_max] << endl;
		if (result == sum) {
			cout << i[i_min] << " + " << i[i_max] << endl;
			return true;
		}
		else if (result < sum)
			i_min++;
		else i_max--;
	}
	
	return false;
}

bool find_sum(vector<int>& i, int sum) {
	cout << "array size = " << i.size() << "/ sum = " << sum << endl;
	int i_max = i.size() - 1;
	int i_min = 0;

	while (i_min < i_max) {
		int result = i[i_min] + i[i_max];
		cout << "comparing " << i[i_min] << " + " << i[i_max] << endl;
		if (result == sum) {
			cout << i[i_min] << " + " << i[i_max] << endl;
			return true;
		}
		else if (result < sum)
			i_min++;
		else i_max--;
	}
	
	return false;
}

int main() {
	cout << "Hello world!" << endl;
	int a[] = {1, 2, 3, 9};
	int b[] = {1, 2, 4, 4};

	int i = 0;
	vector<int> va(0);
	vector<int> vb(0);
	cout << "size of array=" << sizeof(*a) << endl;
	while (i < sizeof(*a)) {
		va.push_back(a[i]);
		vb.push_back(b[i++]);
	}

	cout << "size of vector = " << va.size() << vb.size() << endl;
	bool result_a = find_sum(a, 8);
	bool result_b = find_sum(b, 8);
	cout << result_a << endl;
	cout << result_b << endl;

	bool result_va = find_sum(va, 8);
	bool result_vb = find_sum(vb, 8);
	cout << result_va << ", " << result_vb << endl;

	return 0;
}
