
int fun(int n){
  if(n==0||n==1) return 1;
  else return fun(n-1)+fun(n-2);//递归调用
}
