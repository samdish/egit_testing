/**
 * @file main.c
 * @brief This is the main file that calls the function files and the header file.
 *
 * @author Samdish
 * @date 6-6-16
 */


//#include<wildcardhead.c>

//#include<reversehead.c>
#include "functions.h"

//#define R 5;
//#define C 5;

//const b=R+C;
int ar[81];


int main()
{

	int i;
	//,j,n,x;
	//int R;
	char string1[50]; ///< It takes a string with wildcard character as input
	char string2[50]; ///< It takes a string to compared as input

	//printf("Enter order of the array:");
	//scanf("%d", &n);
	/*if(n%2==0)
		printf("The order of the array should be odd");*/

	//R=n;
	//C=n;
	//int a[R][C];

	//for(i=0;i<n;i++)
		//for(j=0;j<n;j++)
			//scanf("%d",a[i][j]);

	/*printf("The scanned array is: \n");
	for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				printf("%d ",ar[i][j]);*/


	int a[R][C] = { {1,  2,  3,  4,  5},
        {7,  8,  9,  10, 11},
        {13, 14, 15, 16, 17},
	{18,19,20,21,22},
	{23,24,25,26,27}
    }; ///< This is the sample array for printing elements in revesre spiral order.

    /// This function is used to print the array elements.
	spiralPrint(R, C, a);

    for(i=24;i>=0;i--)
    	printf("%d ",ar[i]);

    printf("\n Enter a string with wildcard character: \n ");
    gets(string1);
    printf("\n Enter the string which needs to be compared: \n ");
    gets(string2);

    test(string1,string2);

	/*test("g*ks", "geeks"); // Yes
    test("ge?ks*", "geeksforgeeks"); // Yes
    test("g*k", "gee");  // No because 'k' is not in second
    test("*pqrs", "pqrst"); // No because 't' is not in first
    test("abc*bcd", "abcdhghgbcd"); // Yes
    test("abc*c?d", "abcd"); // No because second must have 2
                             // instances of 'c'
    test("*c*d", "abcd"); // Yes
    test("*?c*d", "abcd"); // Yes*/
    return 0;
}


