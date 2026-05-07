#include <iostream>
#include <bitset>	// binary display
#include <format>	// c++20 display
#include "numsSys.h"

void numsSys() {
	// how the computer know which byte for what?(text, or ui, or video, or sound):
		// OS Pass two things to know the bytes: 1.file extension (.png, .txt)	2. magic bytes(file header bytes is suinqe signetur)
	
	// text is mapped with UTF-8
	// sound is wave
	// video is pattron

	/*
		For how computers work (foundations):

		- Computer Systems: A Programmer's Perspective (Bryant & O'Hallaron) — the gold standard book for C/C++ programmers. Covers bits, memory, the OS, everything.
		- Code: The Hidden Language of Computer Hardware and Software by Charles Petzold — more beginner-friendly, builds up from transistors to software.
		- nand2tetris.org — free course that builds a computer from scratch.
		- https://www.youtube.com/@BenEater/videos
		- https://www.youtube.com/@Computerphile/videos


	
		Textencoding		UTF-8 internals,Unicode					std::string, <codecvt>, ICU library
		Audio/PCM Wave		files,sampling							libsndfile, PortAudio, write a .wav parser
		DSP/FFT				Fourier transformsFFTW					library, or roll your own DFT in C++
		Images				BMP first (simplest),then JPEG/PNG		stb_image.h (single header!), OpenCV
		VideoCodecs			muxing, containers						FFmpeg (the standard — massive but powerful)
	*/





	// we will use mainly 4 numbers representations in computer (decimal, binary, hexdecimal, and octal)

	// hexdecimal	-	base 16
		// counting (0,1,....9,10(A),11(B),12(C),13(D),14(E), and 15(F) )

	int hex{ 0xF };	// must start with 0x  will be used to show memory addreses as it esier then binary to read and show unknow data



	// decimal	-	base 10
		// the esiest as we use theme every day (0,1,.....9,10,..19,20)

	int dec{ 12 };



	// octal	-	 base 8
		// counting is (0,1,2,....,7,10,11,17,...,20,21,.....)
	
	// we will avoid using this. but nums start as	int oct {012}; must start with 0 



	// binary	-	base 2
		// computer main languge (0 and 1)
	int bin{ 0b0001'0010 }; //must start with 0b ,   we use ' for number seperation in IDE only



	// all these will print in decimal
	std::cout << "print in decimal : \n ";
	std::cout << hex << " = 0xF \n" << dec << " = 12 \n" << bin << " = 0b0001\'0010\n";

	// print for each type
	std::cout << "\n print in in each : \n ";
	
	std::cout << "hex: " << std::hex << hex <<'\n';
	std::cout << "dec(defult) : " << std::dec<< dec << '\n'; // we used std::dec to change the output steram
	std::cout << "binary: " << std::bitset<8>(bin) << '\n';  //disaply 8 places as 1 byte

	// using c++20 format 
	std::cout << "\n using format:\n" << std::format("{:b},{:#b}", 0b1010,0b1010);
}