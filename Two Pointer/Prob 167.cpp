'''
167. Two Sum II - Input Array Is Sorted
You are given a 1-indexed array of integers numbers that is already sorted in non-decreasing order.
Find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers index1 and index2 as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.
'''


#include iostream
#include vector
using namespace std;
class Solution{
    public
    vectorint twoSum(vectorint& numbers, int target){
        int left = 0;
        int right = numbers.size() - 1;
        while(leftright){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                return {left+1, right+1};
            }
            else if (sum  target){
                left++;
            }
            else{
                right--;
            }
        }

        return{-1,-1};
    }
};