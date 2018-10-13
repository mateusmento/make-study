#include <calc.h>
#include <string.h>

real_t add(real_t a, real_t b)
{
	return a + b;
}

real_t sub(real_t a, real_t b)
{
	return a - b;
}

real_t divide(real_t a, real_t b)
{
	return a / b;
}

real_t mult(real_t a, real_t b)
{
	return a * b;
}

real_t calc(real_t a, real_t b, string_t op)
{
	const char* ops[] = { "+", "-", "*", "/", "^", "fib of" };
	int i = 0;
	for (; i < sizeof(ops); i++)
		if (strcmp(op, ops[i]))
			break;

	switch(i)
	{
	case 1: return add(a, b);
	case 2: return sub(a, b);
	case 3: return mult(a, b);
	case 4: return divide(a, b);
	case 5: return pow(a, b);
	case 6: return fib(a);
	}
}

