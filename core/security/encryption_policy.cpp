#include "encryption_policy.h"

using namespace std; 

namespace hmn 
{
    vector<uint8_t> EncryptionPolicy :: encrypt(
        const vector<uint8_t> &data, 
        EncryptionScope 
    )
    {
        // placeholder : hook libsodium, age, os keystore.. 
        return data; 
    }

    vector<uint8_t> EncryptionPolicy :: decrypt(
        const vector<uint8_t> &cipher , 
        EncryptionScope 
    )
    {
        return cipher; 
    }
}