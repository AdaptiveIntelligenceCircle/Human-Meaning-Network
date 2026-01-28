#pragma once 
#include <iostream>
using namespace std; 

namespace hmn :: distributed :: storage 
{
    class LocalStore 
    {
        public: 
        void write(const string &key, const string &data);

        string read(const string &key); 
    };
}