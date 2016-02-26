#include <stdio.h>
#include <stdint.h>

int main()
{
	uint64_t val = 0;
	uint64_t val3 = 1;
	uint64_t expNew;
	uint64_t expLast = 0;
	for (uint64_t i = 0; i<0xC0DE42; i++)
	{
		expNew = i / 42;
		if (expNew > expLast)
		{
			val3 *= 3;
			expLast = expNew;
		}
		val = (i * (val + val3) % 0x42DEADBABEC0FFEE);
	}
	printf("HV15-mHPC-%04llx-%04llx-%04llx-%04llx\n",
		val >> 48, (val & 0x0000FFFF00000000) >> 32,
		(val & 0x00000000FFFF0000) >> 16, (val & 0x000000000000FFFF));

	return 0;
}



*****************************
HV15-mHPC-067e-751e-f50e-17e3
*****************************
