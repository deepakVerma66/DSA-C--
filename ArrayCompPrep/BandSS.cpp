#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // vector<int> prices = {7,6,4,3,2,1};
    vector<int> prices = {1,2};
    int i=0,j=1,buyStock = INT16_MAX,sellStock = INT16_MIN,maxProfit = 0;
    while(j<prices.size()){
        buyStock = min(buyStock,prices[i]);
        sellStock = prices[i+1];
        if(sellStock>buyStock){
            sellStock = max(sellStock,prices[j]);
        }
        maxProfit = max(maxProfit,(sellStock-buyStock));
        i++;
        j++;
    }
    cout<<maxProfit;
}