#include "pch.h"
#include "Command.h"

//DelFile::DelFile(string name, string parameters) {}


string DelFile::Run()
{
	_error_report = (remove(_parameters.c_str()) != 0)
		? "failed"
		: "successfully deleted";
	return "0";
}
