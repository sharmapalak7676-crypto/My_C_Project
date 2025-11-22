// wap to print star in a rows in reverse order //

# include <stdio.h>
int main (){
    int rows;
    printf("enter the rows:");
    scanf("%d",&rows);
    for( int i=rows; i>=1;i--){
    for(int j=1; j<=i ;j++){

    printf("*");
    }
printf("\n");
}
return 0;
}
