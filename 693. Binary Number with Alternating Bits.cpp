class Solution {
public:
    bool hasAlternatingBits(int n) {
     while(n>1){
         if((n&1)==((n>>1)&1))
     return false;
         n=n>>1;
    }
        return true;
    }
};


#Python solution
class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        return True if '00' not in bin(n) and '11' not in bin(n) else False
