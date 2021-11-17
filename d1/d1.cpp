#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main() {
	ifstream f("input.txt");
	string input;
	int a = 0, count = 0;

	if(f.is_open()) {
		while(f.eof()) {
			getline(f, input);
			cout << count+1 << " - " << input << endl;
			if(stoi(input) > a) {
				count++;
			}
			a = stoi(input);
		}
	}
	else {
		cerr << "Invalid file: " << endl;
	}
} 
