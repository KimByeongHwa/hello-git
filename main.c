#include <stdio.h>

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main() {
    int x=100, y=200;
    printf("swap() 호출 전 x=%d y=%d\n",x,y);
    swap(&x,&y);
    printf("swap() 호출 후 x=%d y=%d\n",x,y);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
