/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

Approach 1 : - > Trying every possible number as speed/bananna eating capacity per hour from 1 to the maximum possible element of the piles of bananas
O(n^2) TC
*/

/*
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int calculateTotalHours(int speed, vector<int>piles){
    int totalHours = 0;
    for(int i = 0; i < piles.size(); i++){
        totalHours += ceil((double)piles[i]/speed);
        // cout<<i<<" = "<<totalHours<<endl;
    }
    // cout<<endl;
    return totalHours;
}
int main()
{
    // vector<int> piles = {3,6,7,11};
    vector<int> piles = {30,11,23,4,20};
    int hours = 6, maxi = *max_element(piles.begin(), piles.end());
    for(int i = 1; i <= maxi; ++i){
        int totalHours = calculateTotalHours(i,piles);
        // cout<<"Total Hours "<<totalHours<<endl;
        if(totalHours <= hours) {
            // cout<<i;
            return i;
        }
    }
    
    return 0;
}
*/

/*Appraoch 2 
Better then the previous one 
instead of trying every possible number from 1 till the max element
We will use binary search to find the minimum speed for eating bananas
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long calculateTotalHours(long long speed, vector<int>piles){
    long long totalHours = 0;
    for(int i = 0; i < piles.size(); i++){
        totalHours += ceil((double)piles[i]/speed);
    }
    return totalHours;
}
int main()
{
    vector<int> piles = {30,11,23,4,20};
    int h = 5, maxi = *max_element(piles.begin(), piles.end()),speed = INT16_MAX ;
    long long totalHours = 0, start = 1, end = maxi;
    while(start <= end){
        long long mid = start + (end - start)/2;
        totalHours = calculateTotalHours(mid, piles);
        if(totalHours <= h){
            speed = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout<< speed;
    return speed;
}