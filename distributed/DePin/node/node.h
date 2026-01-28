#pragma once 
#include <iostream>
using namespace std;

namespace hmn :: distributed :: depin
{
    class Node 
    {
        public: 
        bool ethical_check(); 
        void stop(); 
        bool start();
    }; 
}