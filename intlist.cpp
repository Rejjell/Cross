#include "intlist.h"

int& IntList::operator[] (const int nIndex)
{
    //assert(nIndex >= 0 && nIndex < 10);

    return m_anList[nIndex];
}
