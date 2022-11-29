#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
	std::filesystem::copy("/home/nickr/TestStart", "/mnt/TestDrive");
	return 0;
}
