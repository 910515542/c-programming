#include<stdio.h>
#include<string.h>

struct {
	int num;
	char *name;
} place[12] = {
	{0,"Atlanta"},{1,"Boston"},{2,"Chicago"},{3,"Denver"},
	{4,"Detroit"},{5,"Houston"},{6,"Los Angeles"},{7,"Mianmi"},
	{8,"New York"},{9,"Philadelphia"},{10,"San Francisco"},
	{11,"Seattle"}
};

int main()
{
	int i, j = 0, k = 0;
	char origin[20], destination[20];
	int distance[][12] = 
	{
		{0},{1108,0},{708,994,0},
        {1430,1998,1021,0},{732,799,279,1283,0},
        {791,1830,1091,1034,1276,0},
        {2191,3017,2048,1031,2288,1541,0},
        {663,1520,1397,2107,1385,1190,2716,0},
        {854,222,809,1794,649,1610,2794,1334,0},
        {748,315,785,1739,609,1511,2703,1230,101,0},
        {2483,3128,2173,1255,2399,1911,387,3093,2930,2902,0},
        {2625,3016,2052,1341,2327,2369,1134,3303,2841,2816,810,0}
	};
	gets(origin);
	gets(destination);
	for ( i = 0; i < sizeof(place) / sizeof(place[0]); i++ )
	{
		if (strcmp(origin, place[i].name) == 0)
		{
			j = i;
		}
		if (strcmp(destination, place[i].name) == 0)
		{
			k = i;
		}
	}
	if (j > k)
	{
		printf("%d\n", distance[j][k]);
	}
	else
	{
		printf("%d\n", distance[k][j]);
	}
	return 0;
}
