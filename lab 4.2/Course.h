#pragma once
#include <ostream>
class Course
{ 
	int cc, credits ;
	char grade;
public:
	Course(int cc, int  credits, char grade) : cc(cc), credits(credits), grade(grade) {};
	inline int getcc() { return cc; }
	inline int getcredits() { return credits; }
	inline char getgrade() { return grade; }
	inline void print(std::ostream& os) {
		os << cc << " (" << credits << " credits ) :" << grade << std::endl;
	}
};
inline std::ostream& operator <<(std::ostream& os, const Course& course) { course.print(os); return os; }