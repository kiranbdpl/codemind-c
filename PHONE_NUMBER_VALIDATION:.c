#include<stdio.h>
#include<math.h>

int main(){
    long int n,k,count=0,i=0,a[40];
    scanf("%ld",&n);
    k=n;
    //printf("%d
",k);
    while(k!=0){
        k/=10;
        ++count;
    }
    //printf("%d
",count);

    while(n!=0){
        a[i]=n%10;
        n/=10;
        i++;
    }
    //printf("%.0f
",count);

if(a[9]!=0 && count==10)
    printf("Valid");
else
    printf("Invalid");
return 0;
}