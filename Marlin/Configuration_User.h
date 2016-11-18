// Jochens Spezial-Config

#ifndef CONFIGURATION_USER_H
#define CONFIGURATION_USER_H

#undef DEFAULT_AXIS_STEPS_PER_UNIT
//#define DEFAULT_AXIS_STEPS_PER_UNIT   {64.25,64.25,2560, 600}  // default steps per unit for K8200
  #define DEFAULT_AXIS_STEPS_PER_UNIT   {128.5,128.5,2560,1370}  // default steps per unit for K8200 -> X,Y,E mit DRV8825

// PID für E3D V6 mit Lüfter
#undef  DEFAULT_Kp
#undef  DEFAULT_Ki
#undef  DEFAULT_Kd
#define  DEFAULT_Kp 24.29 // muss noch!
#define  DEFAULT_Ki 1.58
#define  DEFAULT_Kd 93.51

// optimierter Bauraum
#undef X_MAX_POS
#undef Y_MAX_POS
#undef Z_MAX_POS
#define X_MAX_POS 205
#define Y_MAX_POS 205
#define Z_MAX_POS 205

#undef LCD_LANGUAGE
#define LCD_LANGUAGE de

// TEMP: Extruder Fan direkt angeschlossen
//#undef  EXTRUDER_0_AUTO_FAN_PIN
//#undef  EXTRUDER_AUTO_FAN_SPEED
//#undef  EXTRUDER_AUTO_FAN_TEMPERATURE
//#define EXTRUDER_0_AUTO_FAN_PIN 8
//#define EXTRUDER_AUTO_FAN_TEMPERATURE 100 // should be 50 -> hack for problem with thermistor
//#define EXTRUDER_AUTO_FAN_SPEED   255  // default 255 == full speed

#endif //CONFIGURATION_USER_H

// ***** EOF *****
