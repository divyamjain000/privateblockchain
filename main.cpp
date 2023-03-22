#include<iostream>
#include<string>
#include "sha256.h"
using namespace std;


class Block{
    public:
        string previousHash;
        Block(string data, string previousHash);
        string data;
        string hash;
        string calculateHash();
    
};


Block::Block(string data, string previousHash){
    this->data = data;
    this->previousHash = previousHash;
    this->hash = calculateHash();
}

string Block::calculateHash(){
    SHA256 sha256;
    return sha256(sha256(this->data)+sha256(this->previousHash));
}


int main(){
    Block genesisBlock("Genesis Block", "0");
    Block secondBlock("Second Block", genesisBlock.hash);
    
    Block thirdBlock("Third Block", secondBlock.hash);
    cout << "Genesis Block Hash: " << genesisBlock.hash << endl;
    cout << "Second Block Hash: " << secondBlock.hash << endl;
    cout << "Third Block Hash: " << thirdBlock.hash << endl;
}
