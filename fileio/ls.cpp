#include <iostream>
#include <string>
#include <vector>
#include <filesystem>

using namespace std;
using namespace filesystem;

int main(int argc, char *argv[]) {
	vector<string> paths;
	if (argc == 1) {
		paths.push_back("./");
	} else {
		for (int i = 1; i < argc; ++i) {
			paths.push_back(argv[i]);
		}
	}

	for (const string &path : paths) {
		cout << path << ":" << endl;
		for (const directory_entry &entry : directory_iterator(path)) {
			cout << entry.path().filename().string() << endl;
		}
		cout << endl;
	}

	return 0;
}