#include "integerConversion.h"

void integerConversion() {

	/*
		converting values

			binary -> dec
			binaray:	0		0		0		0			0		0		0		0			0	0	0	0		0	0	0	0
			dec(*):		32,768	16,384	8,192	4,096		2,048	1,024	512		256			128	64	32	16		8	4	2	1   total for 16bits =65,536

			dec -> binary
			divide by 2, and the the remider will construct the binary(from bottom to top) best for humn but mid for machines



		addition
			dec :)


			binary:
				0+0 = 0
				1+0 = 1
				1+1 = o carry 1
				1+1+1=1 carry 1


		sign numbers and two's complments: (signed whole numbers)
			steps: convert sign number to binary
				ex(-5):
					- decimal without sign:				5
					- convert to binary:				0000 0101
					- invert the the bits (~):			1111 1010
					- add 1:							1111 1011  "this is -5 in binary using two complement"


		convert the sign binary to decimal:
			steps:
				-5 = 1111 1011
					- look at the sign bit: 0 do not noramly (*) convert, for 1:
						- we represent all with there (*) value in dec, and last one (sign) will have signe		-128 + 64 + 32 + 16 + 8 + 2 + 1 = -5


		system know to represnt it as sign or unsign by the type (int,long / uint)

		for practice decimals:https://bagofcows.com/binary/
	*/
}