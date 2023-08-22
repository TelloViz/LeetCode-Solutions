/*
Given an array of integers `nums`and an integer `target`, return _indices of the two numbers such that they add up to `target`_.

You may assume that each input would have ** _exactly_ one solution**, and you may not use the _same_ element twice.

You can return the answer in any order.
*/

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
     std::vector<int> twoSum(std::vector<int>& nums, int target) {
		 
          auto it = nums.begin();
          int idx = 0;
          while (it != nums.end())
          {    
               auto foundIter{ std::find(nums.begin(), nums.end(), target - *it)};
               int rhs =  std::distance(it, foundIter)+idx;
               
               if ( foundIter != nums.end() && foundIter != it) 
			       return std::vector<int>{idx, rhs};                    
               it++;
               idx++;
          } // Since solution is guaranteed by challenge specification, while should never terminate.
          return std::vector<int>{};
     }
};


int main()
{
     Solution sol;
     std::vector<int> vec{ 1, 2, 3, 4, 5 };
     sol.twoSum(vec, 6);
     return 0;
}