import re
class Solution:
    def sortSentence(self, s: str) -> str:
        A=dict()
        B=list()
        words=s.split()
        for word in words:
            for i in word:
                if(i.isdigit()):
                    A[i]=word[:-1]
        for i in sorted (A) :
            B.append(A[i])
        sen = ' '.join(B)
        return sen


###
Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
