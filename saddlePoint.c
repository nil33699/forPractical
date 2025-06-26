// saddle points are defined as the elements which are minimum in its row and maximum in its column.
// Example:
// 2 4 6
// 1 3 6
// 0 7 8
// 2 is a saddle point

#include<stdio.h>

void saddlePoint(int matrix[3][3]){
    for (int i = 0 ; i<3; i++){

        int min_in_row = matrix[i][0];
        int col_index = 0;
        for (int j = 1 ; j<3 ; j++){
            if(matrix[i][j] < min_in_row){
                min_in_row = matrix[i][j];
                col_index = j;
            }

        }
        int is_max_in_col = 1;
        for (int k = 0 ; k<3 ; k++){
            if(matrix[k][col_index] > min_in_row){
                is_max_in_col = 0;
            }
        }
        
        if(is_max_in_col){
            printf("\n%d is saddle point at (%d , %d)",min_in_row,i,col_index);
        }


    }
}

int main(){

    int arr[3][3] = {{2 , 4 , 6 },
                     {1 , 3 , 6 },
                     {0 , 7 , 8 }
    
    };

    saddlePoint(arr);
    

    return 0;
}   