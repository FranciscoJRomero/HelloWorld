#include<iostream>
#include<fstream>
#include<string>
using std::cin;
using std::cout;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::filebuf;
using std::string;
using std::ios;

int main() {
	filebuf fileExample;
	fileExample.open("test.txt", ios::out);
	ostream os(&fileExample);
	os << "Writing to file" << std::endl;
	os << "Writing some more!" << std::endl;
	
	fileExample.close();

	ofstream fileExample2("test2.txt",ios::out);
	fileExample2 << "Writing to file using ofstream" << std::endl;
	fileExample2 << "A second line using ofstream" << std::endl;
	fileExample2.close();
	system("pause");
	return 0;
}