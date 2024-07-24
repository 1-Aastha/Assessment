int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
          cin>>arr[i];
    }
    int max=0;
    cin>>max;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
              int profit=arr[j]-arr[i];
              if(profit>max)
                  max=profit;
        }
    }
    cout<<max;
    
    return 0;
}
