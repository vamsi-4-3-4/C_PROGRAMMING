//NULL POINTERS
//NULL POINTER IS THE TYPE OF POINTER WHICH DOES NOT POINT TO THE ADDRESS OF ANY MEMORY LOACTION
//IT REPRESENTS THE MEMORY LOCATION WHICH IS INVALID
//WE CAN SIMPLY MAKE A POINTER AS THE NULL POINTER BY ASSIGNING OF THE NULL TO IT
//WE CAN USE THE NULL POINTER TO INITIALIZE THE POINTER AND WE CAN CONTROL THE POINTER OF POINTING ANY FALSE MEMORY LOCATIONS
//MALLOC FUNCTION RETURNS THE NULL IF IT WAS FAILED TO ALLOCATE THE REQUIRED MEMOERY SPACE TO THE USER

#include<stdio.h>
int main(){
    int n=100;
    int *mypointer;
    int *mypointerno=NULL;
    //PRINTD THE 0 BEACUSE NOTHING IS CONSIDERED AS ZERO 
    printf("ADDRESS OF MY NULL POINTER:%d\n",mypointerno);
    //printf("VALUE OF MY NULL POINTER:%d\n",*(mypointerno));
    if(mypointerno==NULL){
        printf("NO MEMORY IS ALLOCATED TO THE POINTER NO\n");
    }else{
        printf("MEMORY IS ALLOCATED TO THE POINTER NO\n");
    }
    //making pointer as null by assigning null to it 
    //upto here no memory will be allocated to the pointer 
    //we get the output as NO MEMORY IS ALLOCATED TO THE POINTER
    mypointer=&n;
    printf("ADDRESS OF THE MY POINTER:%u\n",mypointer);
    printf("VALUE OF THE MY POINTER:%d\n",*(mypointer));
     if(mypointer==NULL){
        printf("NO MEMORY IS ALLOCATED TO THE POINTER\n");
    }else{
        printf("MEMORY IS ALLOCATED TO THE POINTER\n");
    }
    return 0;
    
}
