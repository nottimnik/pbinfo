int sum_cifra_control(long long a, long long b)
{
  long long p=0;
  if(a==9)
  {
      for(long long i=a;i<=b;i++)
      {
          if(i%9==0) p++;
      }
  }
  else
  for(long long i=a;i<=b;i++)
  {
      if(i%9==a) p++;
  }
  return p;
}
