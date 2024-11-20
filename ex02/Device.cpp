#include "Device.h"
#include <iostream>


/*
    function returning the os
    output: os
    input: none
*/
std::string Device::getOS() const
{
    return os;
}

/*
    function returning the id
    output: id
    input: none
*/
unsigned int Device::getID() const
{
    return id;
}

/*
    function returning the type
    output: type
    input: none
*/
DeviceType Device::getType() const
{
    return type;
}

/*
    function checking if active
    output: true/false
    input: none
*/
bool Device::isActive() const
{
    return active;
}

/*
    function activating
    output: none
    input: none
*/
void Device::activate()
{
    active = true;
}

/*
    function deactivating
    output: none
    input: none
*/
void Device::deactivate()
{
    active = false;
}

/*
    function reseting the devices id and type and os
    output: none
    input: none
*/
void Device::init(unsigned int id, DeviceType type, const std::string& os)
{
    this->id = id;
    this->type = type;
    this->os = os;
}

