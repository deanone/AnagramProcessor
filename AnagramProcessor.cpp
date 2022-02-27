#include "AnagramProcessor.h"
#include <map>

AnagramProcessor::AnagramProcessor(std::string s)
{
    this->s = s;
}

AnagramProcessor::~AnagramProcessor()
{
}

bool AnagramProcessor::isAnagram(std::string otherString)
{
    std::map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }

    for (int i = 0; i < otherString.size(); i++)
    {
        m[s[i]]--;
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second != 0)
        {
            return false;
        }
    }
    return true;
}