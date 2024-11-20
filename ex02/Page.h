#pragma once
#include <string>

class Page
{
private:
	std::string status;
	std::string post;

public:
	void init();

	std::string getPosts() const;
	std::string getStatus() const;

	void clearPage() ;
	void setStatus(const std::string& new_status);
	void addLineToPosts(const std::string& new_line);

};

