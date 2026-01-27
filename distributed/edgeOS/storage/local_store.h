#pragma once 
#include <iostream>
using namespace std; 

class LocalStore 
{
    public: 
    void write_encrypted(const string &key, const string &data);

    string read_encrypted(const string &key); 
};