
#include<stdio.h>

int main(){
    
    int num;
    int arr[1000];
 
    scanf("%d",&num);
    
    for(int i =0; i<num; i++){
        scanf("%d", &arr[i]);
    }
  
    int in = 0;
    for(int k = 0; k < num; k++){
        in = k;
        for(int j = 0; j <num; j++){
            
            printf("%d ",arr[in]);
            in++;
            if(in == num){
                in = 0;
            }
        }
        printf("\n");
    }
    
    return 0;
}
