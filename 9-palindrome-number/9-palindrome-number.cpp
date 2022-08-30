class Solution {
public:
    bool isPalindrome(int x) {
        int remainder=0;
        long rev_num=0;
        int hold=x;
        while(x>0){
            remainder=x%10;
            rev_num=rev_num*10+remainder;
            x=x/10;
        }
        if(hold==rev_num){
            return true;
        }
        else{
        return false;
        }
    }
};