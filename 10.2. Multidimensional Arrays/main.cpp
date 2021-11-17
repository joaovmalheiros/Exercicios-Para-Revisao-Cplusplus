#include <iostream>

using namespace std;

#define WIDTH 5
#define HEIGHT 3

int jimmy [HEIGHT][WIDTH];
int n,m;

int main()
{
    //Multidimensional arrays can be described as "arrays of arrays". For example, a bidimensional array can be
    //imagined as a two-dimensional table made of elements, all of them of a same uniform data type.

    //Multidimensional arrays are not limited to two indices (i.e., two dimensions). They can contain as many
    //indices as needed. Although be careful: the amount of memory needed for an array increases exponentially with each dimension.

    /*At the end, multidimensional arrays are just an abstraction for programmers, since the same results can
    be achieved with a simple array, by multiplying its indices:

    int jimmy [3][5];   // is equivalent to
    int jimmy [15];     // (3 * 5 = 15)
    */

    for (n=0; n<HEIGHT; n++)
        for (m=0; m<WIDTH; m++)
        {
            jimmy[n][m]=(n+1)*(m+1);
        }

    for (n=0; n<HEIGHT; n++)
    {
        for(m=0; m < WIDTH; m++)
        {
            cout << jimmy[n][m] << "\t";
        }
        cout << '\n';
    }

    //Note that the code uses defined constants for the width and height, instead of using directly
    //their numerical values. This gives the code a better readability, and allows changes in the code
    //to be made easily in one place.


    return 0;
}
