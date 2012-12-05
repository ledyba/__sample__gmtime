#include <time.h>
#ifndef NEWLIB
#include <stdio.h>
#endif

int main()
{
	struct tm* result;
	time_t constTime = 1354320000L;
	result = gmtime(&constTime);
#ifndef NEWLIB
	printf("%04d/%02d/%02d %02d:%02d:%02d\n",
			result->tm_year+1900,
			result->tm_mon+1, //1月=0
			result->tm_mday,
			result->tm_hour,
			result->tm_min,
			result->tm_sec);
#endif
	return 0;
}
