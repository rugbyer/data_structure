#include <iostream>
#include "sequential_search.h"

int main(int argc, char **argv) {
	int a[5]={0,1,2,3,4};
	int r = sequential_search(a,0,4,6);

	printf("result:%d\n",r);
	return 0;
}
