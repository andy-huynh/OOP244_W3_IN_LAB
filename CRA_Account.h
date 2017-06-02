//
// Created by Xiaochen Wang on 2017-06-02.
//

#ifndef SICT_CRA_ACCOUNT_H
#define SICT_CRA_ACCOUNT_H
#define _CRT_SECURE_NO_WARNINGS

#include <cstring>
#include <iostream>
#define MAX_NAME_LENGTH 40
#define MIN_SIN 100000000
#define MAX_SIN 999999999

using namespace std;
namespace sict{
    class CRA_Account{
      char m_familyName[MAX_NAME_LENGTH];
      char m_givenName[MAX_NAME_LENGTH];
      int m_sin;
    public:
        CRA_Account();
        void set(const char* familyName, const char* givenName, int sin);
        bool isValid() const;
        void display() const;
    };
}
#endif //SICT_CRA_ACCOUNT_H
