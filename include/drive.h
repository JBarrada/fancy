#ifndef __DRIVE_H_
#define __DRIVE_H_

//#include <ahci.h>
#include <stdint.h>

typedef struct tagDRIVE {
	//HBA_PORT port;
	uint16_t port_num;
	char serial[21];
	char firmware[9];
	char model[41];
	
	uint8_t active;
} DRIVE;

#endif