﻿//#include "twostackwithqueue.h"
//#include "stackwithmin.h"
//#include "stackpop.h"
//#include "behandtree.h"
//#include "minaddtomakevalid.h"
//#include "removeduplicate.h"
//#include "makegood.h"
//#include "fieldsum.h"
//#include "nextgreaterelement.h"
//#include "dailytemperatures.h"
//#include "largestrectanglearea.h"
//#include "trip.h"
//#include "allPathsSourceTarget.h"
//#include "permute.h"
//#include "permuteUnique.h"
//#include "letterCombinations.h"
//#include "combinationSum.h"
//#include "shortestBridge.h"
//#include "openLock.h"
//#include "ladderLength.h"
//#include "totalNQueens.h"
//#include "minEatingSpeed.h"
//#include "slidingPuzzle.h"
//#include "generateParenthesis.h"
//#include "minWindow.h"
//#include "numBusesToDestination.h"
//#include "findOrder.h"
//#include "trie.h"
//#include "replacetrie.h"
//#include "nextgreaterelement.h"
//#include "minSubArrayLen.h"
//#include "equalSubstring.h"
//#include "canConstruct.h"
//#include "lengthOfLongestSubstring.h"
//#include "longestOnes.h"
//#include "jump.h"
//#include "wiggleMaxLength.h"
//#include "leastInterval.h"
//#include "subarraySum.h"
//#include "corpFlightBookings.h"
//#include "slowestKey.h"
//#include "isEscapePossible.h"
//#include "isAdditiveNumber.h"
//#include "kSmallestPairs.h"
//#include "StockPrice.h"
//#include "reversePrefix.h"
//#include "numberOfSteps.h"
//#include "uncommonFromSentences.h"
//#include "numberOfWeakCharacters.h"
//#include "closedIsland.h"
//#include "numDistinctIslands.h"
//#include "simplifiedFractions.h"
//#include "getMaximumGold.h"
#include "findMinFibonacciNumbers.h"


int main()
{
    //SqlRequest sql;
    //std::string id = "60001";
    //sql << "select * from tb_info where ID = " << id;
    //DataBase c;
    //BOOL flag = c.initSqlDataBase("192.168.0.103", "MyChat");
    ////std::string aa = c.getDbName();
    //std::vector<std::vector<std::string>> result = c.selectDbInfo(sql);
    Solution s;
    vector<vector<int>> a({{1,0,7,0,0,0},{2,0,6,0,1,0},{3,5,6,7,4,2},{4,3,1,0,2,0},{3,0,5,0,20,0}});
    int result = s.findMinFibonacciNumbers(19);
    
    system("pause");
    return 0;
}