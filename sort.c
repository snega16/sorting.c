#include<stdio.h>
void main()
{
  int listsize;
    scanf ("%d", &listsize);
  int values[listsize];

  int ctr;
  for (ctr = 0; ctr < listsize; ctr++)
    {
      scanf ("%d", &values[ctr]);
    }
  int currendindex = listsize - 1;
  int currindex;
  int temp;
  int pass;

  for (pass = 1; pass < listsize; pass++)
    {
      for (currindex = 0; currindex < currendindex; currindex++)
	{
	  if (values[currindex] > values[currindex + 1])
	    {
	      temp = values[currindex];
	      values[currindex] = values[currindex + 1];
	      values[currindex + 1] = temp;
	    }
	}
      currendindex--;
    }
  for (ctr = 0; ctr < listsize; ctr++)
    {
      printf ("%d", values[ctr]);
    }
}
