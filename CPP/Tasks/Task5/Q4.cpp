

/*

242. Valid Anagram
 
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.

*/


class Solution {
public:
    bool isAnagram(string s, string t) 
    {
       
        array<int,26> freqarr={0};
        if(s.length() == t.length())
         {
             for (int i = 0; i < s.length(); ++i) 
                 {
                    freqarr[s[i] - 'a']++; 
                    freqarr[t[i] - 'a']--; 
                 }
              for (int i = 0; i < 26; ++i) 
                {
                       if (freqarr[i] != 0 ) 
                       {
                        return false;
                       }
                }
                return true;
        }
         else 
             {
                 return false;
              }
    }
    
};