#include "pch.h"
#include "Header.h"
#include "utility"
#include "limits.h"

int g_number(int number)
{
	return number;
}
void s_name(char* m_name)
{
	const char* name = "Evgeny Yarynich";
	strcpy_s(m_name, strlen(name) + 1, name);
}