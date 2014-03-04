#include <string>
#include <iostream>
#include "strings.h"
using namespace std;


int main(int argc, char *argv)
{
	string in = "";
	//cout << "lol" << endl;
	Strings *s_obj = new Strings();
	s_obj->print(new string("lol"));
	system("pause");

}