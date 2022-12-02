#include <iostream>
#include <fstream>
#include <filesystem>
#include <chrono>
#include <iomanip>

int main()
{
	std::ofstream of;
	of.open("result.txt", std::ios::app);
	if(!of) std::cout<<"File not found\n";
	std::filesystem::remove_all("/mnt/TestDrive/Drive");
	auto start = std::chrono::high_resolution_clock::now();
	std::ios_base::sync_with_stdio(false);
	std::filesystem::copy("/home/nickr/TestStart", "/mnt/TestDrive/Drive");
	auto end = std::chrono::high_resolution_clock::now();
	double time_taken = std::chrono::duration_cast<std::
				chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	std::cout<<std::setprecision(9)<<time_taken<<std::endl;
	of<<time_taken<<std::endl;
	of.close();

	return 0;
}
