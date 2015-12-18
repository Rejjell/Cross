#ifndef INLIST_H
#define INLIST_H


class IntList
{
private:
    int m_anList[10];

public:
    int& operator[] (const int nIndex);
};


#endif // INLIST_H
