#include <stdio.h>

/* Write your isPerfect function here */

int isPerfect(int a) {

    if(a>=2){
        int sum =0;
        for (int i=1; i<=a/2; i++){
            if(a%i ==0){
                sum+=i;
            }
        }
        return (sum==a);
    }
    else{
        return 0;
    }

}

int main(){
    int n;
    printf("Enter upper bound: ");
    scanf("%d", &n);

    /* Print all perfect numbers between 1 and n */

    for(int j =1; j<=n; j++){
        if(isPerfect(j)){
            printf("%d\n", j);
        }
    }

    return 0;
}
