//wap to print A       in c.
//             BC
//             DEF

 include <stdio.h>
int main (){
    int rows;
    int a=1;
    printf("enter the rows:");
    scanf("%d",&rows);
    for( int i=0; i<rows;i++){
    for(int j=0; j<=i ;j++){

    printf("%d",a);
    a++;
    }
printf("\n");
}
return 0;
}
