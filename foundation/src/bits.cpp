#include "bits.h"
#include <bitset>  // behave in index, start from right to left (little-endian)
#include <format>
#include <iostream>

// lst file exercise
std::bitset<4> rotl(std::bitset<4> bits) { // can be done just with "return (bits << 1) | (bits >> 3);"
	bool left_bit{ bits.test(3) };
	bits <<= 1;
	bits.set(0, left_bit);
	return bits;
}

void bits(){
	/*
		-	computer bits: is componations of 1s nad 0s in row.
		-	modren computer use bytes, bytes is 8 of bits in row byte = 8 bits
		-	smallest unit of memory is byte in modren computer , and since all object need UNIQE memory objects MUST have 1 byte at least (boolean is exception, it have 1 bit and dont used the other 7 bits)

		

		-	in places of for storage-intensive losing  bits it not accepted, so we need to fit 8 booleans in 1 byte. we can use -[ bit minbliation ]- to achive this.
	*/



	// bit flag: when single bit of 1 , full object used as boolean value(array of flags??) optimzation?

	// < > is Template arugments 
		/*
			 non type arugemnt: <4>,   fixed value -> tell the compile the size of the object(varible)

			 type arugment: <std::uint8_t>, casting logic -> tell the compile to cast oject to spesefic type
				

			 why not ()?
				- < > for compile time 
				- ( ) for run time  
		*/


	std::bitset<8> bits{ 0b0000'0101 };
	std::cout << std::format("{}{:08b}", "origoanl format:", bits.to_ulong()); // to_ulog not working here cuse of the {:08b} 
	std::cout << "\ninteger value: " << bits.to_ulong(); // to_ulong will make the bits to the unsigen long
	std::cout << "\n\n";

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

	std::cout <<  std::format("\n{}{:d}", "converit it to decimal:", bits.to_ulong()); // sely one as it can be done with to_ulong()
	std::cout << "\n\n";


	/*
		querying bitset

			size():		return number of the bits
			count():	return the number of bits is 1(on/true)
			all():		return false/true if all is 1
			any():		return boolean if any one is 1
			none():		return bollean if there is no 1
	*/

	std::cout << "\n" << bits.size() << "bits are in the bitset: " << bits << "\n";
	std::cout << bits.count() << " bits are set to true: " << bits << "\n";

	std::cout << std::boolalpha; // print the bollean flag
	std::cout << "All bits are true: " << bits.all() << '\n';
	std::cout << "Some bits are true: " << bits.any() << '\n';
	std::cout << "No bits are true: " << bits.none() << '\n';
	std::cout << "\n\n";


	/*
		bit manipulation (bitwise) -> use it with unsigned integral, and they dont affect the origonal data

			left shift:		<<	, X<<n		take the bits of x and shift them to the left by n poitions		(width-sensitive, integral promotion issue[ cpu conver size to defult 2,4,...] use static_cast to preserve the small operation or better dont use small bit sizes )
			right shift:	>>	, X>>n		take the bits of x and shift them to the right by n poitions

			bitwise AND:	&	, X&Y		set bits to 1 when both the idx of bit in x and y is 1
			bitwise OR:		|	, X|Y		set bits to 1 when both the idx of bit in x and y not 1

			bitwise NOT:	~	, ~X		flip each bits in x												(width-sensitive, integral promotion issue)
			bitwise XOR:	^	, X^Y		set the bit to 1 when x bit at idx diffrent from y bit at idx


			to use the one with assigne we can add =:

				<<=
				>>=
				&=
				|=
				^=

				note there is no ~=, we can use x= ~x
	*/

	// normal object size is 2 bytes == 16 bits
	std::bitset<16> bitwiseset{ 0b0010'0000'1111'1010 };

	std::cout << "normal bit set: " << bitwiseset;
	std::cout << "\ninteger value: " << bitwiseset.to_ulong();

	//left shift -> add n 0 to the left and push to left other nums, in end of size they dissapres ( integer make bigger value = multipy by 2 )
	std::cout << "\nleft shit by 4: " << (bitwiseset << 4);
	
	// right shit -> add n 0s to the right and push the 1s to right, in end 1 lost if they get out ( integer make smaller value = divide by 2[drop the decimal] )
	std::cout << "\nright shit by 4: " << (bitwiseset >> 4);

	
	// bitwise not
	std::bitset<16> notbitwiseset{ ~bitwiseset };
	std::cout << "\nbitwise Not: " << (notbitwiseset);
	std::cout << "\ninteger value: " << notbitwiseset.to_ulong();

	// bitwise AND
	std::cout << "\nbitwise And: " << (bitwiseset & notbitwiseset );


	// bitwise or
	std::cout << "\nbitwise OR: " << (bitwiseset | notbitwiseset);


	//bitwise XOR 
	std::cout << "\nbitwise XOR: " << (bitwiseset ^ bitwiseset);

	std::cout << "\n\n";
		
	std::bitset<4> bits1{ 0b0001 };
	std::cout <<"orional:"<< bits1 << " = rotated 1 bit:" << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << "orional:" << bits2 << " = rotated 1 bit:" << rotl(bits2) << '\n';

}