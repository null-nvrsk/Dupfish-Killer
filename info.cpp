#include "info.h"

int Info::filesTotal()
{
	return _filesTotal;
}

void Info::setFilesTotal(int value)
{
	_filesTotal = value;
}

int Info::filesDeleted()
{
	return _filesDeleted;
}

void Info::setFilesDeleted(int value)
{
	_filesDeleted = value;
}

int Info::filesSaved()
{
	return _filesSaved;
}

void Info::setFilesSaved(int value)
{
	_filesSaved = value;
}

int Info::sizeTotal()
{
	return _sizeTotal;
}

void Info::setSizeTotal(int value)
{
	_sizeTotal = value;
}

int Info::sizeDeleted()
{
	return _sizeDeleted;
}

void Info::setSizeDeleted(int value)
{
	_sizeDeleted = value;
}

int Info::sizeSaved()
{
	return _sizeSaved;
}

void Info::setSizeSaved(int value)
{
	_sizeSaved = value;
}

void Info::clear()
{
	_filesTotal = 0;
	_filesDeleted = 0;
	_filesSaved = 0;

	_sizeTotal = 0;
	_sizeDeleted = 0;
	_sizeSaved = 0;
}
