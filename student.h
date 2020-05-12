#pragma once
#include <string>
#include <vector>
#include "Course.h"


class student
{
	int id, gpa;
	std::string name;
	std::vector <Course>cources;
public:
	inline student( int id, std::string name) : name(name), id(id) {}
	int getid() { return id; }
	std:: string  getname() { return name; }
	void print(std::ostream& os, Course& course, student student) {
		os << cource;
	
	}
};

