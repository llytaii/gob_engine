#pragma once
#include <chrono>
#include <iostream>
#include <string>


class Timer
{
public:
	void start(std::string _message) {
		m_start = std::chrono::system_clock::now();
	};

	void stop() { 
		m_end = std::chrono::system_clock::now();
	};

	void print() {
		stop();
		std::chrono::duration<double> diff = m_end - m_start;
		std::cout << "took " << diff.count() << " s" << std::endl;
	}

private:
	std::chrono::system_clock::time_point m_start;
	std::chrono::system_clock::time_point m_end;
};
