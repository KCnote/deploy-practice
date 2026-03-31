#include "../include/SVString.h"
#include <iostream>

CSVString::CSVString() : CSVBase()
{
    m_pS8String = nullptr;

    clear();
}

CSVString::CSVString(const CSVString& obj) : CSVBase(obj)
{
    assign(obj);
}

CSVString::CSVString(const CSVString* pOj) : CSVBase(pOj)
{
    assign(pOj);
}

CSVString::~CSVString()
{
    clear();
}

CSVString& CSVString::operator=(const CSVString& obj)
{
    CSVBase::operator=(obj);
    assign(obj);
 
    return *this;
}

bool CSVString::clear()
{
    bool bReturn = false;

    do
    {
        if(!CSVBase::clear())
            break;

        if(m_pS8String)
        {
            free(m_pS8String);
            m_pS8String = nullptr;
        }
        
        bReturn = true;
    } 
    while(false);

    return bReturn;
}

bool CSVString::assign(const CSVString& obj)
{
    return assign(&obj);
}

bool CSVString::assign(const CSVString* pObj)
{
    bool bReturn = false;

    do
    {
        if(!pObj)
            break;

        if(!CSVBase::assign(pObj))
            break;

        bReturn = true;
    }
    while(false);

    return bReturn;
}

bool CSVString::setSize(int i32Size)
{
    bool bReturn = false;

    do
    {
        if(i32Size <= 0)
            break;

        if(m_pS8String)
        {
            free(m_pS8String);
            m_pS8String = nullptr;
        }

        m_pS8String = (char*)malloc(sizeof(char) * i32Size);

        if(!m_pS8String)
            break;

        m_i32Size = i32Size;
        bReturn = true;
    }
    while(false);

    return bReturn;
}

int CSVString::getSize()
{
    return m_i32Size;
}