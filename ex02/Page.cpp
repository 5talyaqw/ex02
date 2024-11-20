#include "Page.h"
#include <iostream>

/*
	function initializes the page
	output: none
	input: none
*/
void Page::init()
{
	status.clear();
	post.clear();
}

/*
	function returning the posts
	output: posts
	input: none
*/
std::string Page::getPosts() const
{
	return post;
}

/*
	function returning the status
	output: status
	input: none
*/
std::string Page::getStatus() const
{
	return status;
}

/*
	function clearing the page
	output: none
	input: none
*/
void Page::clearPage()
{
	status = "";
	post = "";
}

/*
	function setting the new status
	output: none
	input: new status
*/
void Page::setStatus(const std::string& new_status)
{
	status = new_status;
}

/*
	function adding new line to posts
	output: none
	input: new line
*/
void Page::addLineToPosts(const std::string& new_line)
{
	if (!post.empty())
	{
		post += "\n";
	}
	post += new_line;
}
