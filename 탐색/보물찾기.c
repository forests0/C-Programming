#include <stdio.h>
int main(void){
    int n,k;
    int temp,count=0,arr[100000];
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>k) continue;
        temp=arr[i];
        if(arr[i]==k){
            count++;
            continue;
        }
        else{
            for(int j=i+1;j<n;j++){
                temp+=arr[j];
                if(temp>k) break;
                else if(temp==k){
                    count++;
                    break;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}