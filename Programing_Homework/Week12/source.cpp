#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
double d = 0;
int* mypointer1;
double det(int n, double mat[10][10])
{
    int c, subi, i, j, subj;
    double submat[10][10];
    if (n == 2)
    {
        return((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else
    {
        for (c = 0; c < n; c++)
        {
            subi = 0;
            for (i = 1; i < n; i++)
            {
                subj = 0;
                for (j = 0; j < n; j++)
                {
                    if (j == c)
                    {
                        continue;
                    }
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
            d = d + (pow(-1, c) * mat[0][c] * det(n - 1, submat));
        }
    }
    return d;
}

int main()
{
    int value;
    int n;
    cout << "enter the order of matrix";
    cin >> n;
    mypointer1 = &n;
    printf("star pattern be like size %d*%d\n", *mypointer1, *mypointer1);
    for (int i = 1; i <= *mypointer1; i++) {
        for (int j = 1; j <= *mypointer1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    double mat[10][10];
    int i, j;
    cout << "enter the elements" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "\ndeterminant" << det(n, mat);

    _getch();
}