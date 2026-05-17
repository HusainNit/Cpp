#include "bits.h"
#include <bitset>
#include <format>
#include <iostream>

void bits(){
	/*
		-	computer bits: is componations of 1s nad 0s in row.
		-	modren computer use bytes, bytes is 8 of bits in row byte = 8 bits
		-	smallest unit of memory is byte in modren computer , and since all object need UNIQE memory objects MUST have 1 byte at least (boolean is exception, it have 1 bit and dont used the other 7 bits)

		

		-	in places of for storage-intensive losing  bits it not accepted, so we need to fit 8 booleans in 1 byte. we can use -[ bit minbliation ]- to achive this.
	*/



	// bit flag: when singil bit of 1 full object used as boolean value
	std::bitset<8> bits{ 0b0000'0101 };
	std::cout << std::format("{}{:08b}", "origoanl format:", bits.to_ulong());

	/*
		bitset provise couble of functions to do the mainplations

		idx: the index of the bit 

		test(idx):	check if it 1 or 0
		set(idx):	trun the bit to 1 "on", do noting is alrady is 1
		rest(idx):	turn the bit to 0 "off", do noting is alrady is 0
		flip(idx):	invert the bit 1 to 0 or vice versa
	*/

	bits.set(4);
	std::cout << std::format("\n{}{:08b}", "change 4th bit:", bits.to_ulong());
	bits.reset(0);
	std::cout << std::format("\n{}{:08b}", "change 0th bit:", bits.to_ulong());
	bits.flip(7);
	std::cout << std::format("\n{}{:08b}", "change 8th bit:", bits.to_ulong());

	std::cout <<  std::format("\n{}{:d}", "converit it to decimal:", bits.to_ulong());

}