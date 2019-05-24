# include <list>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <algorithm>

time_t start=clock();

using namespace std;

int b;

int main()
{

	srand(time(NULL));
	b=rand()%26;
	printf("%d",b);
	printf("icinizden bir san bellan mysal ucin 32, indi ol sandan sifrlerinin jemini ayyryn 32-(3+2)=27");
	printf("cykan sanyn gabadyndaky harpy yadynyzda saklan");
	
	printf("bellan harpynyz shulmy %c!",'C');
	printf("\n\n%d",clock()-start);
}
