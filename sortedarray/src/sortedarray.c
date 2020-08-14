void swap(int *n1, int *n2)
{
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

void sort(int *array)
{
  int length = *(array + 0);
  for(int i = 1; i <= length; i++)
  {
    for(int j = 1; j <= (length - i); j++)
    {
      if(*(array + j) > *(array + j + 1))
      {
        swap((array + j), (array + j + 1));
      }
    }
  }
}
