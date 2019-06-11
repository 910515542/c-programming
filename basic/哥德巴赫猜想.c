#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime( int p )
{
	int i;
	int flag = 1;
	for(i = 2; i < p - 1; i++)
	{
		if(p % i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}

void Goldbach( int n )
{
	int prime1;
	int prime2 = 0;
	for(prime1 = 2; prime1 < n; prime1++)
	{
		if(prime(prime1))
		{
			prime2 = n - prime1;
			if(prime(prime2))
			{
				printf("%d=%d+%d", n, prime1, prime2);
				break;
			}
		}
	}
}
