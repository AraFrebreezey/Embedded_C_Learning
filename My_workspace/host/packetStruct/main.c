/*
 * main.c
 *
 *  Created on: Aug 3, 2025
 *      Author: arafa
 */


#include <stdio.h>
#include <stdint.h>
//10 bytes
struct Packet {
	uint8_t crc, status, bat, sensor, longAddr,shortAddr,addrMode;
	uint16_t payload;
};

int main(void)
{
	uint32_t packetValue;
	printf("Enter 32 bit packet value: ");
	scanf("%X", &packetValue);

	struct Packet packet;

	//shifting packetValue to extract bits
	packet.crc = (uint8_t) (packetValue & 0x3);
	packet.status = (uint8_t)  ((packetValue >> 2) & 0x1);
	packet.payload = (uint16_t) ((packetValue >> 3) & 0xFFF);
	packet.bat =(uint8_t)  ((packetValue >> 15) & 0x7);
	packet.sensor =(uint8_t) ((packetValue >> 18) & 0x7);
	packet.longAddr =(uint8_t)  ((packetValue >> 21) & 0xFF);
	packet.shortAddr =(uint8_t) ((packetValue >> 29) & 0x3);
	packet.addrMode = (uint8_t) ((packetValue >>31) & 0x1);

	printf("crc       : %#x\n", packet.crc);
	printf("status    : %#x\n", packet.status);
	printf("payload   : %#x\n", packet.payload);
	printf("bat       : %#x\n", packet.bat);
	printf("sensor    : %#x\n", packet.sensor);
	printf("longAddr  : %#x\n", packet.longAddr);
	printf("shortAddr : %#x\n", packet.shortAddr);
	printf("addrMode  : %#x\n", packet.addrMode);

	printf("Size of struct is %I64u\n", sizeof(packet));

	while (getchar() != '\n');
	getchar();

	return 0;
}
