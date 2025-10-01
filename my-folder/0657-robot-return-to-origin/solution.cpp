class Solution {
public:
    bool judgeCircle(string moves) {
        int up = count(moves.begin(), moves.end(), 'U');
        int down = count(moves.begin(), moves.end(), 'D');
        int left = count(moves.begin(), moves.end(), 'L');
        int right = count(moves.begin(), moves.end(), 'R');

        if (up == down && left == right) {
            return true;
        }
        return false;
    }
};

