// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     // vector<int> prices = {7,6,4,3,2,1};
//     vector<int> prices = {1,2};
//     int i=0,j=1,buyStock = INT16_MAX,sellStock = INT16_MIN,maxProfit = 0;
//     while(j<prices.size()){
//         buyStock = min(buyStock,prices[i]);
//         sellStock = prices[i+1];
//         if(sellStock>buyStock){
//             sellStock = max(sellStock,prices[j]);
//         }
//         maxProfit = max(maxProfit,(sellStock-buyStock));
//         i++;
//         j++;
//     }
//     cout<<maxProfit;
// }   



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>prices={7,1,5,3,6,4};
    // vector<int>prices={7};
    // vector<int>prices={9, 8, 7, 6, 5, 4, 3, 2, 1};
    // vector<int>prices={1, 2, 3, 4, 5, 6, 7, 8, 9};
    int buy=INT16_MAX,ProfOnSell=0,maxProfit=0;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<buy){
            buy = prices[i];
        }
        else{
            ProfOnSell = prices[i]-buy;
            maxProfit = max(maxProfit,ProfOnSell);
        }
    }
    cout<<maxProfit;
    return 0;
}