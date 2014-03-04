#include <string>
#include <iostream>
using namespace std;

class Strings{
	public:
		Strings(); // Constructor
		~Strings(); // Destructor
		void print(string *str); // Prototype

	private:
		string *m_sptr; // String pointer

};