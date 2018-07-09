class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {

        vector<vector<int>> skylineRight;
        vector<vector<int>> skylineTop;
        vector<vector<int>> skylineFinal;

        skylineRight.assign(grid.begin(), grid.end());
        skylineTop.assign(grid.begin(), grid.end());
        skylineFinal.assign(grid.begin(), grid.end());

        int maxHeightRight = 0;
        int maxHeightTop = 0;
        int maxIncrease = 0;

        //Cycle through top level vectors
        for(int i = 0; i<grid.size(); i++){

            //Cycle through second level vectors
            for(int j = 0; j<grid[i].size(); j++){

                //Get max value
                if(grid[i][j] > maxHeightRight)
                    maxHeightRight = grid[i][j];
            }
            for(int j = 0; j<grid[i].size(); j++){

                //Get max value
                if(grid[j][i] > maxHeightTop)
                    maxHeightTop = grid[j][i];
            }
            //Fill new arrays
            for(int j = 0; j<grid[i].size(); j++){

                 skylineRight[i][j] = maxHeightRight;
            }
            //Fill new arrays
            for(int j = 0; j<grid[i].size(); j++){

                 skylineTop[j][i] = maxHeightTop;
            }

            maxHeightRight = 0;
            maxHeightTop = 0;
        }

        //Create final skyline
        for(int i = 0; i<grid.size(); i++){

            for(int j = 0; j<grid[i].size(); j++){

                if(skylineRight[i][j] <= skylineTop[i][j])
                    skylineFinal[i][j] = skylineRight[i][j];
                else
                    skylineFinal[i][j] = skylineTop[i][j];

                maxIncrease += (skylineFinal[i][j] - grid[i][j]);
            }
        }
        return maxIncrease;
    }
};
