
#include <stdlib.h>
#include <stdio.h>

int h(){
    printf("function h");
    return 0; //should return an int
}

int  g(int i){
    int j = 77;
    printf("%d\n", i+j);
    return (i+j);
}

void main(){
    int out = g()
    printf("Output : %d", out);
    print("Done!")
}