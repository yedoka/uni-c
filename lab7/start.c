#include <stdio.h>
////////////////////////////////////////////////////////////////
struct Part                   //declare a structure
{
    int modelnumber;           //ID number of widget
    int partnumber;            //ID number of widget part
    float cost;                //cost of part
};
typedef struct Part Part;
////////////////////////////////////////////////////////////////the most expensive part
void readPart(Part *par);
void printPart(const Part *par);
void readArrayOfParts(Part *array,int how_many);
void printArrayOfParts(const Part *array,int how_many);
Part theMostExpensivePart(Part *array,int how_many);
////////////////////////////////////////////////////////////////
int main()
{
    int n;
    printf("How many elements? ");
    scanf("%d",&n);
    if (n>0)
    {
        Part A[n];      //define an array of structures
        printf("\nPlease enter the following data\n");
        readArrayOfParts(A,n);
        printf("List of parts:\n");
        printArrayOfParts(A,n);
        Part x=theMostExpensivePart(A,n);
        printf("The most expensive part:\n");
        printPart(&x);
    }

    return 0;
}
////////////////////////////////////////////////////////////////
void readPart(Part *par)
{
    printf("Model number = ");
    scanf("%d",&par->modelnumber);
    printf("Part number = ");
    scanf("%d",&par->partnumber);
    printf("Cost = ");
    scanf("%f",&par->cost);
}
////////////////////////////////////////////////////////////////
void printPart(const Part *par)
{
    printf("Model %d, part %d, costs %g\n",
           par->modelnumber,
           par->partnumber,
           par->cost);
}
////////////////////////////////////////////////////////////////

void readArrayOfParts(Part *array,int how_many)
{
    for(int i=0; i<how_many; ++i)
    {
        printf("%d.\n",i+1);
        readPart(array+i);
    }
}

////////////////////////////////////////////////////////////////

void printArrayOfParts(const Part *array,int how_many)
{
    for(int i=0; i<how_many; ++i)
    {
        printf("%4d. ",i+1);
        printPart(array+i);
    }
}
///////////////////////////////////////////////////////////////the most expensive part
Part theMostExpensivePart(Part *array,int how_many)
{
    Part result=array[0];
    for(int i=1; i<how_many; ++i)
        if(result.cost<array[i].cost)
            result=array[i];
    return result;
}