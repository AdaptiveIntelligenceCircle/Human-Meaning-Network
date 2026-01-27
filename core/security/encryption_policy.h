#pragma once 
#include <iostream> 

#include <vector> 
using namespace std; 

namespace hmn 
{
    enum class EncryptionScope
    {
        JOURNAL_ENTRY, 
        INTROSPECTION_TRACE, 
        LOCAL_STATE, 
        P2P_MESSAGE
    }; 

    class EncryptionPolicy 
    {
        public: 
        static vector<uint8_t> encrypt (
            const vector<uint8_t> &data, 
            EncryptionScope scope 
        );

        static vector<uint8_t> decrypt 
        (
            const vector<uint8_t> &cipher, 
            EncryptionScope scope
        ); 
    }; 
}