#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t index = haystack.find(needle);
        return (index != string::npos) ? static_cast<int>(index) : -1;
    }
};

