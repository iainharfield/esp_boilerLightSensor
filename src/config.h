#include <WString.h>

#define StartUpMessage  "/nStarting Outside Lights Rear Controller on "

String app_id 		= "BLS"; 	

String deviceName = "boilerLightSensor";
String deviceType = "BLS";

// Application Specific MQTT Topics and config
const char *oh3StateValue = "/house/bls/boiler-lightsensor/value";  

//const char *oh3CommandTrigger 	= "/house/cntrl/outside-lights-rear/pir-command"; // Event fron the PIR detector (PIRON or PIROFF) PIR to be IMPLEMENTED
//const char *oh3StateManual 		= "/house/cntrl/outside-lights-rear/manual-state";	 // 	Status of the Manual control switch control MAN or AUTOr 