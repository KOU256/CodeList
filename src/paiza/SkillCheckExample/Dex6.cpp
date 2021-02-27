#include<cstdio>
int main(){int n,i;scanf("%d",&n);for(i=1;i<= n;i++)printf(i%15?i%5?i%3?"%d\n":"Fizz\n":"Buzz\n":"Fizz Buzz\n",i);}