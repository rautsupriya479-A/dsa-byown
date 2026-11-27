#include<iostream>
#include<vector>
using namespace std;
vector<int>finderrornums(vector<int>&nums){
    vector<int>ans;
    vector<bool>is present(n+1 , false);
    for(int i =0 ; i<n ; i++){
        if(isPresent[nums[i]]){
            ans.push_back(nums[i]);
        }
        is present[nums[i]]= true;
    }
    for(int i =1; i<isPresent.size(); i++){
        if(!isPresent[i]){
            ans.push_back[i];
            break;
        }
        }
        return ans ;

    }
    
