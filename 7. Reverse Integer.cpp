class Solution {
public:
    int reverse(int x) {
        long long rev = 0, m;
        while (x != 0) {
            m = x % 10;
            rev = rev * 10 + m;
            x = x / 10;
        }
        if (rev < INT_MIN || rev > INT_MAX)
            return 0;
        return (int)rev;
    }
};
