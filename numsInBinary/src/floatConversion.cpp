#include "floatConversion.h"

void floatConverison() {
	/*
		for float representation : https://tfinley.net/csarch-notes/2000/floating

		for praticing float: https://www.h-schmidt.net/
	*/


	/*
		decimal positional (place-value):
			22.57 = 2 * (10^1) + 2*(10^0) + 5 * (10^-1) + 7 * (10^-2)

		decimal positional (place-value): use | for sperate only
			101.1001 = 1 * (2^2) + 0 + 1 * (2^0) | + 1 * (2^-1) + 0 + 0 + 1 * (2^-4)


		scientific notation: (point location)
			923.52 = 9.2352 × 10^2
			101011.101 = 1.01011101 × 2^5

			adding (10^ or 2^):
			+ will move it to the right
			- will move it to the left

			removing (10^ or 2^):
			+ will move it to the left
			- will move it to the right
			
	*/


	/*
		representation:
			32bits = 4bytes
			single precision floating point: [Sign = 1bit] + [Exponent = 8bits] + [Mantissa = 23bits]


			sign:
				1 bit for the num sign (0 positive or 1 nigative) 

			Exponent:
				as we mention in the scientific, we need way to know where the point location. Exponent job is to point where the point should be at. which it 8 bits for 256 location of point placment

			Mantissa:
				the value of the number or in other saing it the rest of nums after the 2^ to it left. hold 23 bit with nums in the left and the rest is 0s in the rest in the right
	
	*/



	/*
		Double Precision vs. Single Precision;
			
			Single Precision: sign 1	exponents 8		maninsta 23
			Double Precision: sign 1	exponents 11	maninsta 52

	*/

	/*
		example of conversion;
			1        10000001        01101000000000000000000

			sign = 1

			exponnext:
				rela num = store exponents - bias    
						 = 129 - 127
						 = 2 

						2^[real num] = 2^2

				finding the bies:
					2^(k-1) -1   where k is the number of the bits in the exponents

					8 (IEEE single)		==	 2^7 − 1 = 127
					11 (IEEE double)	==	 2^10 − 1 = 1023
	
	*/


}