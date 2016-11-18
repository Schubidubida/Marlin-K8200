/**
 * Sample configuration file for Vellemann K8200
 *
 * Please configure your individual hardware options for the K8200:
 */

#ifndef CONFIGURATION_USER_H
#define CONFIGURATION_USER_H

// DRV8825 stepper drivers
#undef DEFAULT_AXIS_STEPS_PER_UNIT
//#define DEFAULT_AXIS_STEPS_PER_UNIT   {64.25,64.25,2560, 600}  // default steps per unit for K8200
  #define DEFAULT_AXIS_STEPS_PER_UNIT   {128.5,128.5,2560,1370}  // default steps per unit for K8200 -> X,Y,E mit DRV8825

// PID for E3D V6 with fan
#undef  DEFAULT_Kp
#undef  DEFAULT_Ki
#undef  DEFAULT_Kd
#define  DEFAULT_Kp 24.29 // muss noch!
#define  DEFAULT_Ki 1.58
#define  DEFAULT_Kd 93.51

// optimized build room
#undef X_MAX_POS
#undef Y_MAX_POS
#undef Z_MAX_POS
#define X_MAX_POS 205
#define Y_MAX_POS 205
#define Z_MAX_POS 205

// german UI
#undef LCD_LANGUAGE
#define LCD_LANGUAGE de

#endif //CONFIGURATION_USER_H

// ***** EOF *****
