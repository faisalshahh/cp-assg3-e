 /*
 Student Name : Shehzad ali shaikh
        UIN   :241S041
      ROLL NO :34


 Assignee Name : Atharwa parulekar
 Assignee Roll No:60
   Task : write a program containing function which
          counts the number of positive integers
           in an array.
        */


  # include <stdio.h>

int count ( int a[], int n ){
    int no_of_positive=0;
    for (int i=0; i< n; i++)
    {
        if (a[i]>0){
            no_of_positive++;
        }
    }
     return  no_of_positive;
}
int main()
{


  int a[] ={1, 2, 3, 4, -5, 6, 7 ,-8, 9, 10};

  printf("the no of positive integers is %d,", count (a, 10));

  return 0;
  }
