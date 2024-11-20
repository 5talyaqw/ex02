#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum class DeviceType { PHONE, PC, LAPTOP, TABLET };	 //
														 //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////


class Device
{
private:
	//private variables for device
	unsigned int id;
	DeviceType type;
	std::string os;
	bool active;

public:

	std::string getOS() const; //function to get the os
	unsigned int getID()const; // function to get the id
	DeviceType getType() const; // function to get the type of the device
	bool isActive() const; // function to check if its active or not

	void activate(); //function to activate
	void deactivate(); // function to deactivate

	void init(unsigned int id, DeviceType type, const std::string& os); // function to initallizing
};


