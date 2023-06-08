#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> pt;
    pt.clear();
    if (n==1){
        vector<long long> pt1(1,1);
        pt.push_back(pt1);
        return pt;
    }
    for(int i=0;i<n;i++){
        vector<long long> pt1;
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                pt1.push_back(1);
            }else{
                long long x=pt[i-1][j-1]+pt[i-1][j];
                pt1.push_back(x);
            }
        }
        pt.push_back(pt1);
    }
    return pt;
}
