#include "Device.h"
#include <iostream>


Device::Device(DeviceType type, const std::string& os)
    : type(type), os(os), active(true), id(0) {}


Device::Device()
    : type(DeviceType::PC), os(""), active(true), id(0) {}


std::string Device::getOS() const
{
    return os;
}

unsigned int Device::getID() const
{
    return id;
}

DeviceType Device::getType() const
{
    return type;
}

bool Device::isActive() const
{
    return active;
}

void Device::activate()
{
    active = true;
}

void Device::deactivate()
{
    active = false;
}

void Device::init(unsigned int id, DeviceType type, const std::string& os)
{
    this->id = id;
    this->type = type;
    this->os = os;
}

