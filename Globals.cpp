#include "Host.h"
#ifndef USE_MARLIN
#include "Motion.h"
#endif
#include "Temperature.h"

#include "config.h"

Host& HOST = Host::Instance();
#ifndef USE_MARLIN
Motion& MOTION = Motion::Instance();
#endif
Temperature& TEMPERATURE = Temperature::Instance();

#ifdef HAS_BT
Host& BT = Host::Instance(2);
#endif

#ifdef HAS_LCD
#include "LCDKeypad.h"
LCDKeypad LCDKEYPAD;
#endif

