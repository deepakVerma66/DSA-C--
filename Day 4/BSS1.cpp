#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    // vector<int> price = {7,1,5,3,6,4};
    // vector<int> price = {8, 3, 6, 2, 9, 4};
    vector<int> price = {6,5,4,3,2,1};
    int profit = 0;
    int maxProfit = INT16_MIN;
    int buy,sell;
    for(int i=1;i<price.size();i++){
        sell = price[i];
        // cout<<"i = "<<i<<endl;
        buy = *min_element(price.begin(),price.begin() + i);
        profit = sell - buy;
        // cout<<"Buy "<<buy<<" Sell "<<sell<<endl;
        // cout<<"Profit "<<profit<<endl;
        maxProfit = max(maxProfit,profit);
    }
    if(maxProfit<0){
        maxProfit = 0;
    }
    cout<<maxProfit;
    return 0;
}