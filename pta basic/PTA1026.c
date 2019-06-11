#include<stdio.h>

int main()
{
  int start, end, s1, s;
  int hour, min, ss;
  double s2;
  scanf("%d %d", &start, &end);
  s1 = (end - start) / 100;
  s2 = (end - start) * 1.0 / 100;
  if(s2 - s1 >= 0.5)
  {
    s = s1 + 1;
  }
  else
  {
    s = s1;
  }
  hour = s / 3600;
  min = (s % 3600) / 60;
  ss = (s % 3600) % 60;
  printf("%02d:%02d:%02d\n", hour, min, ss);
  return 0;
}
