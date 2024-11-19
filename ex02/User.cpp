#include "User.h"
#include <iostream>

void User::init(unsigned int id, const std::string username, unsigned int age)
{
	this->id = id;
	this->username = username;
	this->age = age;
}

void User::clear()
{
	this->id = 0;
	this->username = "";
	this->age = 0;

	devices.clear();
}

unsigned int User::getID() const
{
	return id;
}

std::string User::getUserName() const
{
	return username;
}

unsigned int User::getAge() const
{
	return age;
}

DevicesList& User::getDevices()
{
	return devices;
}

void User::addDevice(const Device& newDevice)
{
	devices.add(newDevice);
}

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
