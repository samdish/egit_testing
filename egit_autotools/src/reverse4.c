/**
 * @file reverse4.c
 *
 * @brief This is a function file to print array elements in reverse spiral order
 *
 */

#include "functions.h"
#define R 5
#define C 5

//const b=R+C;
int ar[25];

//int R,C;
//int ar[81];

/**
 * This method prints the array elements
 *
 * @param m No. of columns
 * @param n Number of rows
 * @param a[R][C] The array given as input
 *
 */
void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0,d=0;


    while (k < m && l < n)
    {
        /// Saving the elements of the first row
    	for (i = l; i < n; ++i)
        {

		//printf("%d ", a[k][i]);
		ar[d]=a[k][i]; ///< Elements of the first row
		d++;
        }
        k++;

        for (i = k; i < m; ++i)
        {
            //printf("%d ", a[i][n-1]);
	    ar[d]=a[i][n-1];
	    d++;
        }
        n--;

        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                //printf("%d ", a[m-1][i]);
		ar[d]=a[m-1][i];
		d++;
            }
            m--;
        }

        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                //printf("%d ", a[i][l]);
		ar[d]=a[i][l];
		d++;
            }
            l++;
        }
    }
}


