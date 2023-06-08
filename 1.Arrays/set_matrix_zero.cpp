#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int rows,cols;
    rows=matrix.size();
    cols=matrix[0].size();
    set<int> r,c;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==0){
                r.insert(i);
                c.insert(j);
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(r.count(i)==1 || c.count(j)){
                matrix[i][j]=0;
            }
        }
    }
}
