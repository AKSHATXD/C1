#include <stdio.h>
   #include <stdlib.h>
   #include <time.h>            

   int main()
   {

      int array[8] = {5,4,3,2,1};
      int i, j, n, temp,no_swap=0,comp=0;//variables to find out swaps and comparisons 
      n = 5;


/*Sort*/
      for (i = 1; i < n; i++) {
      j = i;
      comp++;
      while ((j > 0) && (array[j - 1] > array[j])) {
            if(array[j-1]>array[j]){
            comp++;
        }
        temp = array[j - 1];
        array[j - 1] = array[j];
        array[j] = temp;
        j--;

        no_swap++;//increment swap variable when actually swap is done
    }
}
/* Print */

      printf("\nNo of swaps = %d",no_swap);
      printf("\nNo of comparisions  = %d",comp);
      printf("\nSorted Array\n");
      for (i = 0; i < n; i++)
          printf("%d \n", array[i]);
      return 0;
 } 
