    #include<iostream>
    using namespace std;
    int main()
    {
        int r;
        cout<<"ENter the number of rats"<<endl;
        cin>>r;
        int unit;
        cout<<"Enter the units"<<endl;
        cin>>unit;
        int req=r*unit;
        int comp=0;
        int size;
        cout<<"ENter the size  of arr"<<endl;
        cin>>size;
        int arr[size];
        cout<<"Enter "<<size<<" elements"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int sum = 0;
        if(size==0){
            cout<<-1<<endl<<"No Food available";
            return 0;
        }
        for(int i=0;i<size;i++){
            sum+=arr[i];
            comp++;
            if(sum>=req){
                cout<<comp<<endl;
                return 0;
            }
        }
        if(sum<req){
            cout<<0<<endl;
            cout<<"Not enough food"<<endl;
        }
        
        return 0;
    }