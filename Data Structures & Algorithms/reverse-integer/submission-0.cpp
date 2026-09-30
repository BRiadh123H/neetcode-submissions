class Solution {
public:
    int reverse(int x) {
        int d=0;
        
        while (x!=0)
        {
            int pop=x%10;
            if (d > INT_MAX / 10 || (d == INT_MAX / 10 && pop > 7)) {
                return 0;
            }
            if (d < INT_MIN / 10 || (d == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            d=d*10+x%10;
            x/=10;
        }
        
        return d;
    }
};
