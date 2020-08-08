class Solution {
public:
    /**
     * 
     * @param HP long长整型 HP
     * @param ACK long长整型 ACK
     * @param HP2 long长整型 HP2
     * @param ACK2 long长整型 ACK2
     * @return long长整型
     */
    long long Pokemonfight(long long HP, long long ACK, long long HP2, long long ACK2) {
        // write code here
        if (HP2 <= ACK) {
            return -1;
        }

        long long round = 1;

        HP -= ACK2;

        if (HP <= 0) {
            return round;
        } else if (HP2 - ACK <= ACK) {
            return -1;
        }

        long long round_per_circulation = (HP2 - 1) / ACK;
        long long ack_per_circulation = (round_per_circulation - 1) * ACK2;
        round += HP / ack_per_circulation * round_per_circulation;

        long long remaining_HP = HP % ack_per_circulation;

        if (remaining_HP == 0) {
            round -= 1;
        } else {
            round += remaining_HP / ACK2 + (remaining_HP % ACK2 == 0 ? 0 : 1);
        }

        return round;
    }
};