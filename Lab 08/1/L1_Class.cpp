#ifndef L1_CLASS
#define L1_CLASS

#include <string>
using namespace std;
class Account{
    private:
        string accountNo;
        string accountName;
        float balance;

    public:
        string getaccountNo() const;
        string getaccountName() const;
        float getbalance() const;

        void setaccountNo(const string& accno);
        void setaccountName(const string& name);
        void setbalance(float blnc);

};

#endif