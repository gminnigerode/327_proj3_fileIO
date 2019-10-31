/*
 * FileReader.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */
#include <iostream>
#include <fstream>
#include "../327_proj3_test/includes/FileIO.h"
#include "../327_proj3_test/includes/constants.h"

using namespace std;

int KP_FileIO::getFileContents(const std::string &filename, std::string &contents)
{
	ifstream inputStream(filename, ios_base::in);
	if(inputStream.is_open()){
		string line;
		while(!inputStream.eof()){
			getline(inputStream,line);
			contents += line + "\n";
		}
		return SUCCESS;
	}
	return COULD_NOT_OPEN_FILE_TO_READ;
}

int KP_FileIO::writeVectortoFile(const std::string filename,std::vector<std::string> &myEntryVector)
{
	ofstream outputStream(filename, ios_base::out);
		if(outputStream.is_open()){
			for(int i = 0; i<myEntryVector.size(); i++){
				outputStream << myEntryVector[i] + "\n";
			}
			return SUCCESS;
		}
	return COULD_NOT_OPEN_FILE_TO_WRITE;
}


