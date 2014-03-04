#include "strings.h"

Strings::Strings()
{
	m_sptr = NULL; // Init to zero (NULL)
}
Strings::~Strings()
{
	if (m_sptr != NULL)
		delete m_sptr;
}

void Strings::print(string *ptr)
{
	cout << *ptr << endl;
}
