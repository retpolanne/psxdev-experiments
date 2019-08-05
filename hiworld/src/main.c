#include <stdlib.h>
#include <libgte.h>
#include <libgpu.h>
#include <libgs.h>

#define OT_LENGTH 1
#define PACKETMAX 18
#define SCREENWIDTH 320
#define SCREEN_HEIGHT 240

GsOT myOT[2];
GsOT_TAG myOT_TAG[2][1<<OT_LENGTH];
PACKET GPUPacketArea[2][PACKETMAX];

u_long _ramsize   = 0x00200000;
u_long _stacksize = 0x00004000;

short CurrentBuffer = 0;

void graphics();
void display();

const DEBUG = 1;

int main() {
	return 0;
}

void graphics() {
	SetVideoMode(0);
	GsInitGraph(
		SCREEN_WIDTH, SCREEN_HEIGHT, GsINTER|GsOFSGPU, 1, 0
	);

	myOT[0].length = OT_LENGTH;
	myOT[1].length = OT_LENGTH;
	myOT[0].org myOT_TAG[0];
	myOT[1].org myOT_TAG[1];

	GsClearOt(0, 0, &myOT[0]);
	GsClearOt(0, 0, &myOT[1]);
}

void display() {

}
