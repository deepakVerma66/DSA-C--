// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     // vector<int> bloomDay = {1,10,3,10,2};
//     // int m = 3, k = 1;
//     // vector<int> bloomDay = {1,10,3,10,2};
//     // int m = 3, k = 2;
//     vector<int> bloomDay = {7,7,7,7,12,7,7};
//     int m = 2, k = 3;
//     int maxi = *max_element(bloomDay.begin(), bloomDay.end());
//     for(int i = 1; i <= maxi; i++){
//         int bouquetLeft = m;
//         // while(j < bloomDay.size()){
//         //     int flowersRequired = k;
//         //     while(j < bloomDay.size() && i >= bloomDay[j] && flowersRequired > 0 ){
//         //         flowersRequired-- ;
//         //         j++ ;
//         //     }
//         //     if(flowersRequired == 0) bouquetLeft--;
//         //     if(bouquetLeft == 0){
//         //         cout<<i;
//         //         return 0;
//         //     }
//         //     if(flowersRequired > 0) j++;
//         // }
//         int flowersRequired = k;
//         for(int j = 0; j < bloomDay.size(); j++){
//             if(bloomDay[j] <= i){
//                 flowersRequired -- ;
//                 if(flowersRequired == 0){
//                     bouquetLeft -- ;
//                     flowersRequired = k;
//                 }
//             }
//             else flowersRequired = k;
//         }
//         if(bouquetLeft <= 0){
//             cout<<i;
//             return 0;
//         }
//     }
//     cout<<-1;
    
//     return 0;
// }

// Using Binary Search
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // vector<int> bloomDay = {1,10,3,10,2};
    // int m = 3, k = 1;
    // vector<int> bloomDay = {1,10,3,10,2};
    // int m = 3, k = 2;
    vector<int> bloomDay = {7,7,7,7,12,7,7};
    int m = 2, k = 3;
    int maxi = *max_element(bloomDay.begin(), bloomDay.end());
    for(int i = 1; i <= maxi; i++){
        int bouquetLeft = m;
        int flowersRequired = k;
        for(int j = 0; j < bloomDay.size(); j++){
            if(bloomDay[j] <= i){
                flowersRequired -- ;
                if(flowersRequired == 0){
                    bouquetLeft -- ;
                    flowersRequired = k;
                }
            }
            else flowersRequired = k;
        }
        if(bouquetLeft <= 0){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    
    return 0;
}