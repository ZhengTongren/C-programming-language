#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Contact* pc)
{
	memset(pc, 0, sizeof(pc->data));
	pc->sz = 0;
}