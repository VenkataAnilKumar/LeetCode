//
//  OJ#418.h
//  LeeteCodeOJ#418
//


#ifndef __LeeteCodeOJ_418__OJ_418__
#define __LeeteCodeOJ_418__OJ_418__

#define M 10

#include <stdio.h>
#include <string>
#include <vector>

using std::vector;
using std::string;

int SentenceScreenFitting(char stc[][M], int row, int col, size_t l);

class Solution {
public:
    int wordsTyping(vector<string>& sentence, int rows, int cols);
};

#endif /* defined(__LeeteCodeOJ_418__OJ_418__) */
