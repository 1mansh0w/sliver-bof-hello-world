#include <windows.h>
#include "beacon.h"

void go(char *args, int len) {
	BeaconPrintf(CALLBACK_OUTPUT, "Hello World");
}
