int main() {
    int T;
    cin>>T;
    
    for(int i=0;i<T;i++){
        int gcost,pcost;
        cin>>gcost>>pcost;
    
        int n,c1=0,c2=0;
        cin>>n;
    
       
    
    for(int j=0;j<n;j++){
            int p1, p2;
            cin >>p1 >> p2;
    
            if(p1==1)
               c1++;
    
            if(p2==1)
              c2++;}
    
            int cost1=c1*gcost+c2*pcost;
            int cost2=c1*pcost+c2*gcost;
            
        int mincost=min(cost1,cost2);
           cout<<mincost<<endl;
    
   }
    
            
           
    return 0;
}
