class Solution {
public:
    bool isPowerOfThree(int n) {
        if ( n <= 0 ) return false;
        
        double d = log10(n) / log10(3); 
        if ( abs(d - int(d)) > 0 ) return false;
        else return true;
    }
};
