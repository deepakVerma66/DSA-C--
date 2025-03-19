    //Approach 1 Using Set
    //Two sorted arrays

    // #include<iostream>
    // #include<set>
    // using namespace std;
    // int main(){
    //     int arr1[] = {1,1,2,3,4,5};    
    //     int arr2[] = {2,3,4,4,5,6};    
    //     int n1 = sizeof(arr1)/sizeof(arr1[0]);
    //     int n2 = sizeof(arr2)/sizeof(arr2[0]);
    //     set <int> set;
    //     for(int i=0;i<n1;i++){
    //         set.insert(arr1[i]);
    //     }
    //     for(int j=0;j<n2;j++){
    //         set.insert(arr2[j]);
    //     }
    //     for(int i:set){
    //         cout<<i<<" ";
    //     }
    // }


    //Optimal Approach using Two pointer approach
    #include<iostream>
    #include<vector>
    using namespace std;

    vector <int> Union(vector <int> a, vector <int> b){
        vector <int> unionResult;
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                if(unionResult.empty() || unionResult.back()!=a[i]){
                    unionResult.push_back(a[i]);
                    // i++;
                }
                    i++;

            }
            else if(a[i]>b[j]){
                if(unionResult.empty() || unionResult.back()!=b[j]){
                    unionResult.push_back(b[j]);
                }
                j++;
            }
            else{
                if(unionResult.empty() || unionResult.back()!= a[i]){
                    unionResult.push_back(a[i]);
                    // i++;
                }
                    i++;
                    j++;

            }
        }
        while(i<a.size()){
            if(unionResult.empty() || unionResult.back() != a[i]){
                unionResult.push_back(a[i]);
                // i++;
            }
            i++;
        }
        while(j<b.size()){
            if(unionResult.empty() || unionResult.back() != b[j]){
                unionResult.push_back(b[j]);
                // j++;
            }
            j++;

        }
        return unionResult;
    }
    int main(){
        vector <int> v1 = {1,1,2,3,3,4,5,5};
        vector <int> v2 = {2,3,4,5,6,6,6,7,8,9,10};
        vector <int> unionResult;
        unionResult = Union(v1,v2);
        for(auto i:unionResult){
            cout<<i<<" ";
        }
    }