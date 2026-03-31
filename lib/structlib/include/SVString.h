#include "SVBase.h"

class CSVString : CSVBase
{
    public:
        CSVString();
        CSVString(const CSVString& obj);
        CSVString(const CSVString* pOj);
        virtual ~CSVString();

        CSVString& operator=(const CSVString& obj);

    public:
        virtual bool clear() override;
        bool assign(const CSVString& obj);
        bool assign(const CSVString* pObj);

        bool setSize(int i32Size);
        int getSize();

    private:
        char* m_pS8String;
        int m_i32Size;
};