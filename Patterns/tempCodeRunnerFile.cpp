1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(char k='A';k<'A'+i;k++){
            cout<<k;
        }
        for(char l='A'+i-2;l>='A';l--){
            cout<<l;
        }
        cout<<endl;
    }