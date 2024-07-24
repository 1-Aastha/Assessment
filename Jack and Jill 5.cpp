int main() {
     int n,count=0;//counter variable counts steps
     cin>>n;
     int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    while(true){ //1 means true
        int zero=0; //flag variable stores notification whether execution go in that direction or not ?maybe
        for(int j=0;j<n;j++){ //array's all values are zero or not
        if(arr[j]!=0) //if this is true then exit the loop
        {
           zero=1;
            break;
        }}
        if(zero==0){ 
            break;
        }
        else{//condition false then check if all values of array are even or not, if it is not even then make it even
           int even=0;
            for(int j=0;j<n;j++){
                if(arr[j]%2==1){
                    even=1;
                    break;
                }}
                if(even==0){
                    for(int j=0;j<n;j++){
                        arr[j]=arr[j]/2;
                    }
                    count++;
                }
                else{
                    for(int j=0;j<n;j++){
                       if(arr[j]%2!=0){
                           arr[j]=arr[j]-1;
                           count++;
                       }
                    }
                }
            }
        }
        
    cout<<count;
    
    return 0;
}
