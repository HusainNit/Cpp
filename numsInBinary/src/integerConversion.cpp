#include "integerConversion.h"

void integerConversion() {

	/*
		converting values:
			binary -> dec
			binaray:	0		0		0		0			0		0		0		0			0	0	0	0		0	0	0	0
			dec(*):		32,768	16,384	8,192	4,096		2,048	1,024	512		256			128	64	32	16		8	4	2	1   total for 16bits =65,536

			dec -> binary
			divide by 2, and the the remider will construct the binary(from bottom to top) best for humn but mid for machines


			Ranges:
				Unsigned bits:
					ex(8): 
						0000 0000 = 0
						1111 1111 = 255
						notes: there is 256 possible numbers from 0 to 255

				signed bits:
					the most left one is for sign so:
						0111 1111 = -127
						1000 0000 = 128
						note: still it have 255 possibles nums, but max is + 128 and min is - 127. hold less value



				addition
					dec :)


					binary:

						addition:
							0+0 = 0
							1+0 = 1
							1+1 = o carry 1
							1+1+1=1 carry 1





				subtraction:
					convert to binary then do the subtraction

					ex:
						two binary nums: 1001 0000 - 1100 0000
							nums1:	
									1001 0000
								(~)	0110 1111
								(+1)0111 0000
								=	112
								1001 0000 = -112

							nums2:
									1100 0000
								(~)	0011 1111
								(+1)0100 0000
								=	64
								1100 0000 = -64

							decimal operation: -112 - (-64) = -112 + 64 = -48
							remove sign = 48
							convert to binary= 0011 0000
								result > signe bit:
									0011 0000
								(~)	1100 1111
								(+1)1101 0000
							
							sign bin > dec:
								1101 000
								-128+64+16 = -48




				multiply:
					multiply not same && operations

					rules:
						0 × 0 = 0
						1 × 0 = 0
						0 × 1 = 0
						1 × 1 = 1


					copy method:
						1- if the bottom number is 1, move the top as answer (	top x bottom  )
						*- every next digit step there must be 0 added to the right most
					

					ex: 1000 x 0101
						steps:
							1)	1000 x 1 = 1000
							2)	1000 X 0 = 0000 (0)
							3)	1000 x 1 = 1000 (00)
							4)	1000 x 0 = 0000 (000)

							5) addition:
								    1000
								   0000
								  1000
								 0000

							  =  0101000






				divison:
					we will do fit or not fit method, it fit added 1 dont fit added 0.  the size of the fix will be the bottom when it is less digits.

						ex: 1100 ÷ 100
							steps:
								1)	does 100 fits in 110? yes -> 1
								2)	minus 100 from 1100 = Reminder 10
								3)	we use last 0 with reminder 10 = 100

									1100 -> 10 -> 100
								4)	does 100 fits in 100 ? yes ->1
								5)	minus 100 from 100 = Reminder 0

								= 1 add placment 4 = 11
					




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
								- we represent all with there (*) value in dec, and last one (sign) will have signe		-128 + 64 + 32 + 16 + 8 + (4*0) + 2 + 1 = -5




		system know to represnt it as sign or unsign by the type (int,long / uint)

		for practice decimals:https://bagofcows.com/binary/
	*/
}