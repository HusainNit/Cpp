#include <spdlog/spdlog.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include "logUse.h"
#include <iostream>

void logUse() {
	try {
		// This goes up 3 levels (out of x64-Debug, build, and out)
		auto file_logger = spdlog::rotating_logger_mt("program_logger", "../../../logs/system.log", 1024 * 1024 * 5, 3);

		file_logger->set_level(spdlog::level::debug);

		file_logger->debug("loggingDebugging() called");
		file_logger->info("Logger initialized with a rolling file!");
		file_logger->error("This is an error with a variable: {}", 42);
	}
	catch (const spdlog::spdlog_ex& e) {
		std::cout << "there is error " << e.what();
	};
}