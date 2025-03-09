#include <stdio.h>

void GetMatrix( int **value ,int *row, int *col ) {
    scanf("%d %d" , row , col);
    int *v ;
    *value = new int[ (*row) * (*col) ] ;
    for(int i=0 ; i< *row ; i++){
        for(int j = 0 ; j < *col ; j++){
            scanf("%d" , &(*value)[ i * (*col) +j]);
        }//end for
    }//end for
}

int main() {
    int r , c , *data ;
    
    GetMatrix(&data ,&r , &c) ;
    
    if ( r == 0 && c == 0 ) {
        printf("Matrix:\n") ;
        printf("(empty)\n") ;
    } else if( r == c){
        printf("Error: Incorrect number of elements.\n") ;
        
    } else if ( r == 0 ){
        printf("Error: Invalid matrix dimensions.\n");
    
    } else if ( c == 0 ){
        printf("Error: Invalid matrix dimensions.\n");
    } else{
        printf("Matrix (%dx%d):" , r , c);
        printf("\n") ;
        for(int i = 0 ; i < r ; i++ ){
            for(int j = 0 ; j < c ; j++ ){
                printf( "%d " , data [i * c + j] );
            }//end for
            printf("\n") ;
        }//end for
    }//end if else
    return 0 ;
}//end function
