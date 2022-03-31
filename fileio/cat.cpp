#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	for (int i = 1; i < argc; ++i) {
		ifstream ifs(argv[i]);
		string buf;
		while (getline(ifs, buf))
			cout << buf << endl;
	}
	return 0;
}