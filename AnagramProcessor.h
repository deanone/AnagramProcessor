#ifndef ANAGRAM_PROCESSOR_H
#define ANAGRAM_PROCESSOR_H

#include <string>

class AnagramProcessor
{
    std::string s;
public:
    AnagramProcessor(std::string s);
    ~AnagramProcessor();

    bool isAnagram(std::string otherString);

};

#endif  // ANAGRAM_PROCESSOR_H