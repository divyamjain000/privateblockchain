#include<iostream>
#include<string>
#include "sha256.h"
using namespace std;

int main()
{
    SHA256 sha256;
    string myHash  = sha256("Hello Divyam");    
    cout << myHash << endl;
}