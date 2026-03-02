#include<stdio.h>

int main(){

    int x =10, y = 20 , z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;


    printf("Before swap : \n");
    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);


   // swap x and z using pointers 

   int temp = *px;
   *py = *pz;
   *pz = temp;


    printf("\nAfter Swap:\n");
    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);

    printf("\nPointer Addresses:\n");
    printf("px holds address: %p\n", px);
    printf("py holds address: %p\n", py);
    printf("pz holds address: %p\n", pz);

    return 0;
}






     