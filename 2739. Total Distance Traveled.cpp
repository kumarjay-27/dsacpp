class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dis = 0;
        while (mainTank > 0) {
            if (mainTank >= 5) {
                dis += 50;
                mainTank -= 5;
                if (additionalTank > 0) {
                    mainTank++;
                    additionalTank--;
                }
            } else {
                dis += mainTank * 10;
                mainTank = 0;
            }
        }
        return dis;
    }
};
