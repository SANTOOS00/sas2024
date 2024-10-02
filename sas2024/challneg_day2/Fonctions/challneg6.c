#include <stdio.h>

int	fibonacci(int n)
{
    int res;
	if (n < 0)
		return (-1);
	if (n < 2)
		return (n);
        res =fibonacci(n - 2) + fibonacci(n - 1);
        return (res);
}

int	main()
{
	printf("%i", fibonacci(10));
}