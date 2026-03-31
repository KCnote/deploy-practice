#include "../include/SVBase.h"

int CSVBase::m_i32ID = 0;

CSVBase::CSVBase()
{
    ++m_i32ID;

    clear();
}

CSVBase::CSVBase(const CSVBase& obj)
{
    assign(obj);
}

CSVBase::CSVBase(const CSVBase* pObj)
{
    assign(pObj);
}

CSVBase::~CSVBase()
{
    clear();
}

CSVBase& CSVBase::operator=(const CSVBase& obj)
{
    assign(obj);
 
    return *this;
}

bool CSVBase::clear()
{
    return true;
}

bool CSVBase::assign(const CSVBase& obj)
{
    assign(&obj);

    return true;
}

bool CSVBase::assign(const CSVBase* pObj)
{
    bool bReturn = false;

    do
    {
        if(!pObj)
            break;

        bReturn = true;
    }
    while(false);

    return bReturn;
}