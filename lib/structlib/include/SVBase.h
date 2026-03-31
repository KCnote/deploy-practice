class CSVBase
{
    public:
        CSVBase();
        CSVBase(const CSVBase& obj);
        CSVBase(const CSVBase* pOj);
        virtual ~CSVBase();

        CSVBase& operator=(const CSVBase& obj);

    public:
        virtual bool clear();
        bool assign(const CSVBase& obj);
        bool assign(const CSVBase* pObj);

    private:
        static int m_i32ID;
};