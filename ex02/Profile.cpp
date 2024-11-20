#include "Profile.h"
#include <iostream>
/* function reseting the user page and friends
   output:none
   input: owner
*/
void Profile::init(const User& owner)
{
	this->user = owner;
	this->page.init();
	this->friends.init();
}

/* function clearing the user page and friends
   output:none
   input: none
*/
void Profile::clear()
{
	page.clearPage();
	friends.clear();
	user = User();
}

/* function returning the owner
   output:user
   input: none
*/
User Profile::getOwner() const
{
	return user;
}

/* function setting the status
   output:none
   input: new status
*/
void Profile::setStatus(const std::string& new_status)
{
	page.setStatus(new_status);
}

/* function adding lines for posts
   output:none
   input: post
*/
void Profile::addPostToProfilePage(const std::string& post)
{
	page.addLineToPosts(post);
}

/* function adding new friend
   output:none
   input: friend to add
*/
void Profile::addFriend(const User& friend_to_add)
{
	friends.add(friend_to_add);
}

/* function presenting the posts and status
   output:result of the page
   input: none
*/
std::string Profile::getPage() const
{
	std::string result = "Status: " + page.getStatus() + "\n";
	result += "*******************\n";
	result += "*******************\n";
	result += page.getPosts();
	return result;
}

/* function printing the array of the friends
   output:result of the friends list
   input: none
*/
std::string Profile::getFriends() const
{
	std::string result = "";
	UserNode* cur = friends.get_first();
	while (cur != nullptr)
	{
		if (!result.empty())
		{
			result += ",";
		}
		result += cur->get_data().getUserName();
		cur = cur->get_next();
	}
	return result;
}

/* function checking if there is friends names len like the owner name len
   output:the list of friends who have the same len
   input: none
*/
std::string Profile::getFriendsWithSameNameLength() const
{
	std::string result = "";
	int ownerLen = user.getUserName().length();
	UserNode* cur = friends.get_first();

	while (cur != nullptr)
	{
		std::string friendName = cur->get_data().getUserName();
		if (ownerLen == friendName.length())
		{
			if (!result.empty())
			{
				result += ",";
			}
			result += friendName;
		}
		cur = cur->get_next();
	}
	return result;
}
