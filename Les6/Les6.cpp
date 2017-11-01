#pragma once
#include <iostream>
#include <string>
#include <fstream>

void twotextfilecombination()
{
	std::string inputfilenameone = "inputfileone.txt";
	std::string inputfilenametwo = "inputfiletwo.txt";
	std::string outputfilename = "outputfile.txt";

	std::string fileonetext;
	std::string filetwotext;
	std::string newtext;

	std::ifstream in_streamOne;
	in_streamOne.open(inputfilenameone);

	std::ifstream in_streamTwo;
	in_streamTwo.open(inputfilenametwo);

	while(!in_streamOne.eof() && !in_streamTwo.eof())
	{
		std::string line;
		std::getline(in_streamOne, line);
		line;
		newtext += line;
		
		std::getline(in_streamTwo, line);
		newtext += line;
	}

	std::ofstream out_stream;
	out_stream.open(outputfilename);

	if (!out_stream) {
		std::cout << "Probleem bij schrijven file" << std::endl;
		exit(1);
	}
	out_stream << newtext << std::endl;

}

void textfilereversion()
{
	const char* const file_name_in = "testtextin.txt";
	const char* const file_name_out = "testtextout.txt";

	std::string text;
	std::ifstream file(file_name_in);
	char c;
	while (file.get(c)) {
		text += c;
	}

	std::reverse(text.begin(), text.end());

	std::ofstream fileout(file_name_out);
	fileout << text;
}

int main()
{
	textfilereversion();
	twotextfilecombination();
	return 0;
}

