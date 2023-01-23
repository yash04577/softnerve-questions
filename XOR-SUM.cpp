#include <iostream>
#include<vector>
using namespace std;

void getSubset(vector<int>nums, vector<vector<int>> &AllSubset, vector<int>subset,  int index){
    if(index >= nums.size()){
        AllSubset.push_back(subset);
        return;
    }
        
    getSubset(nums, AllSubset, subset, index+1);
        
    int element = nums[index];
    subset.push_back(element);
    
    getSubset(nums, AllSubset, subset, index+1);
        
}


int getXorSum(vector<vector<int>> arr){
    int sum = 0;

    for(int i=0; i<arr.size(); i++){
        int subsetSum = 0;

        for(int j=0; j<arr[i].size(); j++){
            subsetSum ^= arr[i][j];
        }

        sum += subsetSum;
    }

    return sum;
}


int main(){

    vector<int>array = {5,1,6};
    vector<vector<int>>AllSubset;
    vector<int>subset;
    int index = 0;

    getSubset(array, AllSubset, subset, index);

    int sum = getXorSum(AllSubset);
    cout << "sum = " << sum;
    
    return 0;
}