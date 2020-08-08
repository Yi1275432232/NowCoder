class Solution {
public:
    /**
     * 
     * @param chessboard string字符串vector 
     * @return string字符串
     */
    string playchess(vector<string> &chessboard) {
        // write code here
        int j_x = -1, j_y = -1;

        for (int x = 0; x < chessboard.size(); x++) {
            for (int y = 0; y < chessboard[x].size(); y++) {
                if (chessboard[x][y] == 'j') {
                    j_x = x;
                    j_y = y;
                    break;
                }
            }
        }

        if (j_x == -1 or j_y == -1) {
            return "Sad";
        }

        int obstacle = 0;

        for (int y = j_y - 1; y >= 0; y--) {
            if (chessboard[j_x][y] != '.') {
                if (chessboard[j_x][y] == 'P') {
                    if (obstacle == 1) {
                        return "Happy";
                    }
                } else if (chessboard[j_x][y] == 'B' or chessboard[j_x][y] == 'J') {
                    if (abs(y - j_y) == 1) {
                        return "Happy";
                    }
                } else if (chessboard[j_x][y] == 'C') {
                    if (obstacle == 0) {
                        return "Happy";
                    }
                }

                obstacle++;
            }
        }

        obstacle = 0;

        for (int y = j_y + 1; y < chessboard[j_x].size(); y++) {
            if (chessboard[j_x][y] != '.') {
                if (chessboard[j_x][y] == 'P') {
                    if (obstacle == 1) {
                        return "Happy";
                    }
                } else if (chessboard[j_x][y] == 'B' or chessboard[j_x][y] == 'J') {
                    if (abs(y - j_y) == 1) {
                        return "Happy";
                    }
                } else if (chessboard[j_x][y] == 'C') {
                    if (obstacle == 0) {
                        return "Happy";
                    }
                }

                obstacle++;
            }
        }

        obstacle = 0;

        for (int x = j_x - 1; x >= 0; x--) {
            if (chessboard[x][j_y] != '.') {
                if (chessboard[x][j_y] == 'P') {
                    if (obstacle == 1) {
                        return "Happy";
                    }
                } else if (chessboard[x][j_y] == 'B' or chessboard[x][j_y] == 'J') {
                    if (abs(x - j_x) == 1) {
                        return "Happy";
                    }
                } else if (chessboard[x][j_y] == 'C') {
                    if (obstacle == 0) {
                        return "Happy";
                    }
                }

                obstacle++;
            }
        }

        obstacle = 0;

        for (int x = j_x + 1; x < chessboard.size(); x++) {
            if (chessboard[x][j_y] != '.') {
                if (chessboard[x][j_y] == 'P') {
                    if (obstacle == 1) {
                        return "Happy";
                    }
                } else if (chessboard[x][j_y] == 'B' or chessboard[x][j_y] == 'J') {
                    if (abs(x - j_x) == 1) {
                        return "Happy";
                    }
                } else if (chessboard[x][j_y] == 'C') {
                    if (obstacle == 0) {
                        return "Happy";
                    }
                }

                obstacle++;
            }
        }

        return "Sad";
    }
};