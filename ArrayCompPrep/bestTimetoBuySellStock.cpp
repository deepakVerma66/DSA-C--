// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>prices = {7,1,5,3,6,4};
//     int buy = prices[0],profitOnSell = 0,maxProfit = 0,j,sell=0;
//     for(int i=1;i<prices.size();i++){
//         j=i;
//         if(prices[i]<buy){
//             buy = prices[i];
//         }
//         else{
//             while(prices[j]<prices[j+1]){
//                 sell = prices[j+1];
//                 j++;
//             }
//             profitOnSell = sell-buy;
//             maxProfit+=profitOnSell;
//             cout<<"Initial Profit "<<profitOnSell<<endl;
//             buy = sell;
//             i=j;
//         }
//         // cout<<maxProfit;
//     }
//     cout<<maxProfit;
//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> prices = {7, 1, 5, 3, 6, 4}; // Test Case:1
    // vector<int> prices = {9,7,5,3,2,1}; // Test Case:2
    // vector<int> prices = {1,2,3,4,5,6,7,8,9}; // Test Case:3
    // vector<int> prices = {7,7,7,7,7,7}; // Test Case:4
    // vector<int> prices = {7, 1,5,3,1,6,4}; // Test Case:5
    vector<int> prices = {7, 1, 5, 3,4, 6, 4}; // Test Case:6
    // vector<int> prices = {7, 1, 5, 3, 6, 4}; // Test Case:7
    // vector<int> prices = {5};
    int i = 0, j = 1, buyStock = INT16_MAX, sellStock = INT16_MIN, profit = 0, maxProfit = 0;
    while(j<prices.size()){
        if(profit==0){
            buyStock = min(buyStock,prices[i]);
            cout<<"Buy Stock 1: "<<buyStock<<endl;
        }else{
            buyStock = prices[i];
            cout<<"BuyStock: "<<buyStock<<endl;
        }
        sellStock = prices[i+1];
        cout<<"Sell Stock: "<<sellStock<<endl;
        if(sellStock>prices[j+1]){
            // profit = max(profit,(sellStock-buyStock));
            profit = sellStock-buyStock;
            maxProfit+=profit;
            buyStock = prices[j+1];
            cout<<"Profit: "<<profit<<endl;
            cout<<"maxProfit: "<<maxProfit<<endl;
            i=j+1;
            j=i+1;
        }
        else{
            i++;
            j++;
            maxProfit = max(maxProfit,(sellStock-buyStock));
        }
    }
    // cout<<maxProfit;
    cout << (maxProfit > 0 ? maxProfit : 0);

    return 0;
}