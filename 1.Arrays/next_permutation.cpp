#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int first_ind=-1,second_ind=0 ,just_max=INT_MAX;
    //find the index where reverse increasng order breaks
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            first_ind=i;
            break;
        }
    }
    if(first_ind==-1){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    for(int i=first_ind+1;i<n;i++){
        if(permutation[i]>permutation[first_ind] && permutation[i]<just_max){
            just_max=permutation[i];
            second_ind=i;
        }
    }
    swap(permutation[first_ind],permutation[second_ind]);
    reverse(permutation.begin()+first_ind+1,permutation.end());
    return permutation;
    
}
