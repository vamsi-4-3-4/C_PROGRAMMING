//VOID POINTER 
//void pointer is the type of pointer which does not belongs to any of the data type 
//it can point to to the  any data of an any data type and we can typecast the void pointer to the any of the required data type 
#include<stdio.h>
int main(){
    int n=99;
    //declaring the void pointer 
    void *ptr;
    //assigning the address of the variable n as we know that the pointer holds the address of an variable
    ptr=&n;
    //if we use the %d for the address we get the negative address
    // to get the address correctly we have to use the %u 
    printf("POINTER HAVING THE ADDRESS:%u\n",ptr);
    //IF WE TRY TO PRINT THE *PTR WE GET THE  ERROR WITH ANYOF THE DATATYPE 
    //WE NEED TO TYPE CAST ON THE FOLLOWING WAY TO GET THE VALUE STORED ON THE POINTER 
    printf("VALUE OF THE POINTER:%d",*(int*)ptr);
    return 0;
}
//WE CANNOT GET THE VALUE THAT WAS STORED IN THE POINTER DIRECTLY WE NEED TO TYPE CAST IT 
//MALLOC AND THE CALLOC AND REALLOC DYNAMIC MEMORY ALLOCATION FUNCTIONS RETURNS THE VOID POINTER SO THEY ARE CAPABLE OF ALLOCATING
//MEMORY TO THE ANY DATATYPE WE WANT 
