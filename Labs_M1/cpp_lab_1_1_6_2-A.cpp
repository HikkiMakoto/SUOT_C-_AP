#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t[] = { 5, 4, 3, 1, 2 };
	vector<int> v1(t, t + 5);
	vector<int> v2(t, t + 1 );
	vector<int> sums(v1.size());
	int x;
	cin >> x;
	for (unsigned i = 0; i < v1.size(); ++i)
		sums[i] = x + v1[i] + v2[i];
	cout << "sums: ";
	for (int sum : sums)
		cout << sums[sum] << " ";
	cout << endl;
	return 0;
}