#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string> ip_table{ "127.0.0.1", "192.168.0.1", "192.168.1.100", "255.255.255.255" };

	int x;

	cin >> x;
	if (x > 4) {
		cout << "Too big - value must be smaller than or equal to vector size." << endl;
	}
	else {
		vector <string> ip_output (ip_table);
		ip_output.resize(x);
		for (unsigned i = 0; i < ip_output.size(); i++) {
			cout << ip_output[i] << " ";
		} 
		cout << endl;
	}
	return 0;
}