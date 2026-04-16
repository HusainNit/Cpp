/*
	steps to setup:
	1. go in the folder of the project 
	2. add the spdlog as submodule 
	3. go to project properties > c/c++ > general > additonal include > edit > press the ...(the dots) > select the include in the project
*/

#include <spdlog/spdlog.h>
#include <spdlog/sinks/rotating_file_sink.h>

#include <print>


// submodule:
// git submodule add https://github.com/gabime/spdlog.git src/3rd-party/spdlog
// git submodule update --init --recursive

void loggingDebugging() {

	try {
		
		auto file_logger = spdlog::rotating_logger_mt("program_logger", "logs/system.log", 1024 * 1024 * 5, 3);

		file_logger->set_level(spdlog::level::debug); // local set for the folder

			// for the console
		//spdlog::debug("loggingDebugging() called");
		//spdlog::info("Logger initialized with a rolling file!");
		//spdlog::error("This is an error with a variable: {}", 42); // use std::formating

			// for the file
		file_logger->debug("loggingDebugging() called");
		file_logger->info("Logger initialized with a rolling file!");
		file_logger->error("This is an error with a variable: {}", 42);

	} catch (const spdlog::spdlog_ex& ex) {
		std::println("Log initialization failed: {}", ex.what());
	}

}

