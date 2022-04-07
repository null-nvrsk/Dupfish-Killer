#pragma once

class Info
{
private:
	int _filesTotal;
	int _filesDeleted;
	int _filesSaved;

	int _sizeTotal;
	int _sizeDeleted;
	int _sizeSaved;


public:
	int filesTotal();
	void setFilesTotal(int value);

	int filesDeleted();
	void setFilesDeleted(int value);

	int filesSaved();
	void setFilesSaved(int value);

	int sizeTotal();
	void setSizeTotal(int value);

	int sizeDeleted();
	void setSizeDeleted(int value);

	int sizeSaved();
	void setSizeSaved(int value);

	void clear();
};
