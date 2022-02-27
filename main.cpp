#include "AnagramProcessor.h"
#include <iostream>

int main(int argc, char* argv[])
{
    std::string s = "for";
    AnagramProcessor* ap = new AnagramProcessor(s);

    std::string s1 = "fro";

    if (ap->isAnagram(s1))
    {
        std::cout << s1 << " is anagram of " << s << ", and vice versa.\n";
    }

    delete ap;

    return 0;
}