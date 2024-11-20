#include "User.h"
#include <iostream>

/*
	function initializes the User object with the provided id, username, and age.
	output: none
	input: unsigned int id, const std::string username, unsigned int age
*/
void User::init(unsigned int id, const std::string username, unsigned int age)
{
	this->id = id;
	this->username = username;
	this->age = age;
}

/* function clears the Userdata by resetting id, username, age, and clearing the devices list. 
   output: none
   input: none
   */
void User::clear()
{
	this->id = 0;
	this->username = "";
	this->age = 0;

	devices.clear();
}
/* function returns the id 
   output: id
   input: none
*/
unsigned int User::getID() const
{
	return id;
}

/* function returns the username
   output: username
   input: none
*/
std::string User::getUserName() const
{
	return username;
}
/* function returns the age
   output: age
   input: none
*/
unsigned int User::getAge() const
{
	return age;
}

/* function returns the devices
   output: devices
   input: none
*/
DevicesList& User::getDevices()
{
	return devices;
}
/* function adding new device
   output: none
   input: new device 
*/
void User::addDevice(const Device& newDevice)
{
	devices.add(newDevice);
}

/* function checking if the devices are on
   output: true or false
   input: none
*/
bool User::checkIfDevicesAreOn() const
{
	DeviceNode* cur = devices.get_first();

	while (cur != nullptr)
	{
		if (!cur->get_data().isActive())
		{
			return false;
		}
		cur = cur->get_next();
	}
	return true;
}
