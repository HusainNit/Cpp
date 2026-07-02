#include "bits.h"
#include <bitset>  // behave in index, start from right to left (little-endian)
#include <format>
#include <iostream> // have inside it the #include <cstdint> or unit8_t , its better to include it also
#include <cstdint>

// lst file exercise
std::bitset<4> rotl(std::bitset<4> bits) { // can be done just with "return (bits << 1) | (bits >> 3);"
	bool left_bit{ bits.test(3) };
	bits <<= 1;
	bits.set(0, left_bit);
	return bits;
}

void colors() {
	constexpr std::uint32_t redBits{ 0xFF000000 };
	constexpr std::uint32_t greenBits{ 0x00FF0000 };
	constexpr std::uint32_t blueBits{ 0x0000FF00 };
	constexpr std::uint32_t alphaBits{ 0x000000FF };

	std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
	std::uint32_t pixel{};
	std::cin >> std::hex >> pixel; // std::hex allows us to read in a hex value

	// use Bitwise AND to isolate the pixels for our given color,
	// then right shift the value into the lower 8 bits
	const std::uint8_t red{ static_cast<std::uint8_t>((pixel & redBits) >> 24) };
	const std::uint8_t green{ static_cast<std::uint8_t>((pixel & greenBits) >> 16) };
	const std::uint8_t blue{ static_cast<std::uint8_t>((pixel & blueBits) >> 8) };
	const std::uint8_t alpha{ static_cast<std::uint8_t>(pixel & alphaBits) };

	std::cout << "Your color contains:\n";
	std::cout << std::hex; // print the following values in hex

	// reminder: std::uint8_t will likely print as a char
	// we static_cast to int to ensure it prints as an integer
	std::cout << static_cast<int>(red) << " red\n";
	std::cout << static_cast<int>(green) << " green\n";
	std::cout << static_cast<int>(blue) << " blue\n";
	std::cout << static_cast<int>(alpha) << " alpha\n";
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

	/*
		bit masks: best way to turn the bit on or off with index
			bit mask blocks the bitwise operators from touching bits we don’t want modified, and allows access to the ones we do want modified
	*/

	// first we define the bit we need to modify
	constexpr std::uint8_t mask1{ 0b0000'0010 };
	constexpr std::uint8_t mask5{ 0b0010'0000 };
	constexpr std::uint8_t mask7{ 1<<7 }; // esier way

	// the one we need to change
	std::uint8_t flags{ 0b0010'1100 };

	// no we check the bit location in the mask to the one in flag(chek it poision of 1 in masx is on or off in the flag)
	std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");
	std::cout << "bit 5 is " << (static_cast<bool>(flags & mask5) ? "on\n" : "off\n");
	std::cout << "bit 7 is " << (static_cast<bool>(flags & mask7) ? "on\n" : "off\n");

	// to set it (make it on)
	flags |= mask1; // turn on bit 1		//flags |= (mask4 | mask5); // turn bits 4 and 5 on at the same time

	// check the change
	std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");

	// to rest it (make it off)
	flags &= ~mask5;				// flags &= ~(mask4 | mask5); // turn bits 4 and 5 off at the same time

	// check the change
	std::cout << "bit 5 is " << (static_cast<bool>(flags & mask5) ? "on\n" : "off\n");  

	// to flip (set to 1 or 0 debend in the origonal)
	flags ^= mask7;				//flags ^= (mask4 | mask5);  flip bits 4 and 5 at the same time

	// check again
	std::cout << "bit 7 is " << (static_cast<bool>(flags & mask7) ? "on\n" : "off\n");


	std::cout << "\n\n";



	[[maybe_unused]] constexpr std::bitset<8> nmask0{ 0b0000'0001 }; // represents bit 0
	[[maybe_unused]] constexpr std::bitset<8> nmask1{ 0b0000'0010 }; // represents bit 1
	[[maybe_unused]] constexpr std::bitset<8> nmask2{ 0b0000'0100 }; // represents bit 2
	[[maybe_unused]] constexpr std::bitset<8> nmask3{ 0b0000'1000 }; // represents bit 3
	[[maybe_unused]] constexpr std::bitset<8> nmask4{ 0b0001'0000 }; // represents bit 4
	[[maybe_unused]] constexpr std::bitset<8> nmask5{ 0b0010'0000 }; // represents bit 5
	[[maybe_unused]] constexpr std::bitset<8> nmask6{ 0b0100'0000 }; // represents bit 6
	[[maybe_unused]] constexpr std::bitset<8> nmask7{ 0b1000'0000 }; // represents bit 7

	std::bitset<8> nflags{ 0b0000'0101 }; // 8 bits in size means room for 8 flags
	std::cout << "bit 1 is " << (nflags.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (nflags.test(2) ? "on\n" : "off\n");

	nflags ^= (nmask1 | nmask2);
	std::cout << "bit 1 is " << (nflags.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (nflags.test(2) ? "on\n" : "off\n");

	nflags |= (nmask1 | nmask2);// turn bits 1 and 2 on
	std::cout << "bit 1 is " << (nflags.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (nflags.test(2) ? "on\n" : "off\n");

	nflags &= ~(nmask1 | nmask2);// turn bits 1 and 2 off
	std::cout << "bit 1 is " << (nflags.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (nflags.test(2) ? "on\n" : "off\n");

	/*
		reasion of using bit mask:
			- bit flags is more optimzed when we have to track like 100 flag for like 200 persion(game logic of village)

			- Imagine you had a function that could take any combination of 32 different options. One way to write that function would be to use 32 individual Boolean parameters (void someFunction(std::bitset<32> options);)  someFunction(option10 | option32);
	*/

	std::cout << "\n\n";

	// using color with bits
	colors();


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
					- look at the sign bit: 0 do noramly (*) convert, for 1:
						- we represent all with there (*) value in dec, and last one (sign) will have signe		-128 + 64 + 32 + 16 + 8 + 2 + 1 = -5


		system know to represnt it as sign or unsign by the type (int,long / uint)

		 for float representation : https://tfinley.net/csarch-notes/2000/floating
		 for practice decimals:https://bagofcows.com/binary/
		 for praticing float: https://www.h-schmidt.net/
		 string practisong:
			1. ASCII: https://www.ascii-code.com/ , https://learn.sparkfun.com/tutorials/ascii/all
			2. UTF-8 with signaters:  https://testsigma.com/free-tools/utf8-decode   , https://onlinetools.com/utf8/validate-utf8 , https://www.tsmean.com/articles/encoding/unicode-and-utf-8-tutorial-for-dummies/
			3. BOM: https://betterexplained.com/articles/understanding-big-and-little-endian-byte-order/  ,  https://www.w3.org/International/questions/qa-byte-order-mark , 
			4. sound: https://it.uw.edu//wp-content/uploads/2013/09/DigitalAudioBasics.pdf , https://ciechanow.ski/sound/ , https://wiki.xiph.org/Videos/Digital_Show_and_Tell
			5. video: https://scratchapixel.com/ , https://workflow.frame.io/guide/ , https://github.com/leandromoreira/digital_video_introduction , 

		 and this file is big: need to be seperate out of this folder foundation to other like bitsLevel and rename this for the const
	*/
		
}