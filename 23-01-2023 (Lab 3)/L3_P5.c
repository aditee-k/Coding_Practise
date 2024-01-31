#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 4

int A[N][N];
int row_sums[N];
int col_sums[N];

void round_matrix() 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            int a = A[i][j];
            int floor_val = floor(a);
            int ceil_val = ceil(a);

            int floor_row_sum = row_sums[i] - a + floor_val;
            int floor_col_sum = col_sums[j] - a + floor_val;

            int ceil_row_sum = row_sums[i] - a + ceil_val;
            int ceil_col_sum = col_sums[j] - a + ceil_val;

            if (abs(row_sums[i] - floor_row_sum) <= abs(row_sums[i] - ceil_row_sum) && abs(col_sums[j] - floor_col_sum) <= abs(col_sums[j] - ceil_col_sum)) 
            {
                A[i][j] = floor_val;
                row_sums[i] = floor_row_sum;
                col_sums[j] = floor_col_sum;
            } 
            else
            {
                A[i][j] = ceil_val;
                row_sums[i] = ceil_row_sum;
                col_sums[j] = ceil_col_sum;
            }
        }
    }
}