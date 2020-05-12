
#include "student.h"
#include <iostream>
#include <vector>
#include <fstream>



void load(std::string fname, std::vector<student>  &students) {
	std::ifstream ifs(fname.c_str());
	if (!ifs) throw std:: string("input file " + fname + " not found");

	std::string name;
	int id;
	ifs >> name;
	while (ifs) {
		students.push_back(student(id,name));
		ifs >> name;
		ifs >> id;
	}
	ifs.close();
}
int main() {

	std::vector<student>students;

	load(students.data, students);







}
