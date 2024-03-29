#include "../src/Crypto.cpp" 
#include "../include/SecureBankApplication/Crypto.h"
#include <openssl/rsa.h>
#include <vector>
#include <iostream>

void print(std::vector <unsigned char> const &a) {
   std::cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
}

int main() {
    // Create vectors to hold the private and public keys
    std::vector<unsigned char> privateKey;
    std::vector<unsigned char> publicKey;

    // Generate the RSA key pair and store the keys in the vectors
    Crypto::generate_key_pair(publicKey,privateKey);

    std::cout << "Private Key:" << endl;
    print(privateKey);

    std::cout << "\nPublic Key:" << endl;
    print(publicKey);

    return 0;
}