#include <bits/stdc++.h>

using namespace std;

int get_floor_number(int preferred_floor_number, vector<int> floor_arr){
    int pfn = preferred_floor_number;
    int min_neg = INT_MAX, min_pos = INT_MAX;
    
    for(int i: floor_arr){
        
        if(i == pfn){
            return i;
        }
        
        if(pfn-i < 0){
            min_neg = min(min_neg, abs(pfn-i));
        }else{
            min_pos = min(min_pos, abs(pfn-i));
        }
    }
    
    if(min_neg <= min_pos){
        return pfn+min_neg;
    }else{
        return pfn-min_pos;
    }
}

int main()
{
    cout << get_floor_number(10,{4, 8, 12});
    return 0;
}

