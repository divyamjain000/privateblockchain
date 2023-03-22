#include<iostream>
#include<string>
#include "sha256.h"
using namespace std;

class Block{
    public:
        string previousHash;
        Block(string data, string previousHash);
        string calculateHash();
        string data;
        string hash;
        string calculateHash();
};

