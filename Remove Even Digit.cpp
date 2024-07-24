//try to make solution more understandable
int main() 
    {
  int num, result=0, factor=1;
    cin>>num;
  for(;num>0;num/=10){
      int digit=num%10;
      if(digit%2){
         result+=digit*factor;
          factor*=10;
      }}
  cout<<result<<endl;
  return 0;
}
