/*
 * app.c
 *
 *  Created on: Aug 8, 2018
 *      Author: root
 */
#define DISK_THROUGHPUT 500
#define D2M_FACTOR 1000
#include<stdio.h>
int main(int argc, char** argv) {
	const char* filename = argv[0];
	const int buffersize = DISK_THROUGHPUT * D2M_FACTOR;
	unsigned char memorybuffer[buffersize];
	const char* mode = "rb";
	FILE* file = fopen(filename, mode);

	fclose(file);
	return 1;
}

