#include "../../include/equals/equals.hpp"

#include <algorithm>
#include <cctype>
#include <string>

/**
 * @brief din::equals namespace
 */
namespace din::equals {
    
    /**
     * 
     */
    bool equals(std::string string1, std::string string2) 
    {
        std::string word1 = string1;
        std::string word2 = string2;
        std::transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
        std::transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
    
        if (word1 != word2) 
        {
            return false;
        }
        return true;
    }
}