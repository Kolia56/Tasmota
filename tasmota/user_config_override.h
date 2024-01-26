/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

/*****************************************************************************************************\
 * USAGE:
 *   To modify the stock configuration without changing the my_user_config.h file:
 *   (1) copy this file to "user_config_override.h" (It will be ignored by Git)
 *   (2) define your own settings below
 *
 ******************************************************************************************************
 * ATTENTION:
 *   - Changes to SECTION1 PARAMETER defines will only override flash settings if you change define CFG_HOLDER.
 *   - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *   - You still need to update my_user_config.h for major define USE_MQTT_TLS.
 *   - All parameters can be persistent changed online using commands via MQTT, WebConsole or Serial.
\*****************************************************************************************************/

/*
Examples :

// -- Master parameter control --------------------
#undef  CFG_HOLDER
#define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Setup your own Wifi settings  ---------------
#undef  STA_SSID1
#define STA_SSID1         "saintpierre"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "rabategrillonfauquier"     // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------
#undef  MQTT_HOST
#define MQTT_HOST         "192.168.21.110" // [MqttHost]

#undef  MQTT_PORT
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

#undef  MQTT_USER
#define MQTT_USER         "YourMqttUser"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "YourMqttPass"         // [MqttPassword] Optional password

// You might even pass some parameters from the command line ----------------------------
// Ie:  export PLATFORMIO_BUILD_FLAGS='-DUSE_CONFIG_OVERRIDE -DMY_IP="192.168.1.99" -DMY_GW="192.168.1.1" -DMY_DNS="192.168.1.1"'

#ifdef MY_IP
#undef  WIFI_IP_ADDRESS
#define WIFI_IP_ADDRESS     MY_IP                // Set to 0.0.0.0 for using DHCP or enter a static IP address
#endif

#ifdef MY_GW
#undef  WIFI_GATEWAY
#define WIFI_GATEWAY        MY_GW                // if not using DHCP set Gateway IP address
#endif

#ifdef MY_DNS
#undef  WIFI_DNS
#define WIFI_DNS            MY_DNS               // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

#ifdef MY_DNS2
#undef  WIFI_DNS2
#define WIFI_DNS2           MY_DNS2              // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

// !!! Remember that your changes GOES AT THE BOTTOM OF THIS FILE right before the last #endif !!!
*/

// -- Location ------------------------------------
#ifdef  LATITUDE
#undef  LATITUDE
#endif
#define LATITUDE               47.0978937         // [Latitude] Your location to be used with sunrise and sunset

#ifdef  LONGITUDE
#undef  LONGITUDE
#endif
#define LONGITUDE              1.9679076          // [Longitude] Your location to be used with sunrise and sunset

#ifdef  TIME_STD_DAY
#undef  TIME_STD_DAY
#endif
#define TIME_STD_DAY           Mon               // Day of week (1 or Sun, 2 or Mon, 3 or Tue, 4 or Wed, 5 or Thu, 6 or Fri, 7 or Sat)

// -- Setup your own Wifi settings  ---------------
#ifdef  STA_PASS1
#undef  STA_SSID1
#endif
#define STA_SSID1         "saintpierre"             // [Ssid1] Wifi SSID

#ifdef  STA_PASS1
#undef  STA_PASS1
#endif
#define STA_PASS1         "rabategrillonfauquier"     // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------
#ifdef  MQTT_HOST
#undef  MQTT_HOST
#endif
#define MQTT_HOST         "192.168.21.110" // [MqttHost]

#ifdef  MQTT_PORT
#undef  MQTT_PORT
#endif
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

#ifdef  MQTT_USER
#undef  MQTT_USER
#endif
#define MQTT_USER         "YourMqttUser"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "YourMqttPass"         // [MqttPassword] Optional password

// You might even pass some parameters from the command line ----------------------------
// Ie:  export PLATFORMIO_BUILD_FLAGS='-DUSE_CONFIG_OVERRIDE -DMY_IP="192.168.1.99" -DMY_GW="192.168.1.1" -DMY_DNS="192.168.1.1"'

//#ifdef MY_IP
#ifdef  WIFI_IP_ADDRESS
#undef  WIFI_IP_ADDRESS
#endif
// #define WIFI_IP_ADDRESS     "192.168.21.179"                // Shelly 1 for dev Set to 0.0.0.0 for using DHCP or enter a static IP address
// #define WIFI_IP_ADDRESS     "192.168.21.202"                // Set to 0.0.0.0 for using DHCP or enter a static IP address
#define WIFI_IP_ADDRESS     "192.168.21.175"                // Set to 0.0.0.0 for using DHCP or enter a static IP address
//#endif

//#ifdef MY_GW
#ifdef  WIFI_GATEWAY
#undef  WIFI_GATEWAY
#endif
#define WIFI_GATEWAY        "192.168.21.1"                // if not using DHCP set Gateway IP address
//#endif

//#ifdef MY_DNS
#ifdef  WIFI_DNS
#undef  WIFI_DNS
#endif
#define WIFI_DNS            "192.168.21.1"               // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
//#endif


#ifdef NTP_SERVER1
#undef NTP_SERVER1
#endif
#define NTP_SERVER1      "192.168.21.17"        // [NtpServer1] Select first NTP server by name or IP address (135.125.104.101, 2001:418:3ff::53)

#ifdef CODE_IMAGE_STR
#undef  CODE_IMAGE_STR
#endif
#define CODE_IMAGE_STR        "thermostat_2024.01.01.a"                

#ifdef ROTARY_V1
#undef ROTARY_V1           
#endif

#ifdef USE_SONOFF_RF
#undef USE_SONOFF_RF            
#endif

#ifdef USE_SONOFF_SC
#undef USE_SONOFF_SC           
#endif

#ifdef USE_ARMTRONIX_DIMMERS
#undef USE_ARMTRONIX_DIMMERS           
#endif

#ifdef USE_ARMTRONIX_DIMMERS
#undef USE_ARMTRONIX_DIMMERS      
#endif

#ifdef USE_PS_16_DZ
#undef USE_PS_16_DZ       
#endif

#ifdef USE_SONOFF_IFAN 
#undef USE_SONOFF_IFAN        
#endif

#ifdef USE_BUZZER
#undef USE_BUZZER      
#endif

#ifdef USE_ARILUX_RF
#undef USE_ARILUX_RF      
#endif

#ifdef USE_EXS_DIMMER
#undef USE_EXS_DIMMER     
#endif

#ifdef USE_DOMOTICZ
#undef USE_DOMOTICZ                              
#endif 

#ifdef USE_SHUTTER
#undef USE_SHUTTER             
#endif

#ifdef  USE_KNX_WEB_MENU
#undef USE_KNX_WEB_MENU                       // disable KNX WEB MENU (+8.3k code, +144 mem)
#endif

#define DS18x20_USE_ID_ALIAS

// #define USE_TIMEPROP    //  include the timeprop feature (+1.2k)
//   // for single output
//   #define TIMEPROP_NUM_OUTPUTS          1       // how many outputs to control (with separate alogorithm for each)
//   #define TIMEPROP_CYCLETIMES           60      // cycle time seconds
//   #define TIMEPROP_DEADTIMES            0       // actuator action time seconds
//   #define TIMEPROP_OPINVERTS            false   // whether to invert the output
//   #define TIMEPROP_FALLBACK_POWERS      0       // falls back to this if too long betwen power updates
//   #define TIMEPROP_MAX_UPDATE_INTERVALS 120     // max no secs that are allowed between power updates (0 to disable)
//   #define TIMEPROP_RELAYS               1       // which relay to control 1:8

// #define USE_PID         // include the pid feature (+4.3k)
//   #define PID_SETPOINT                  19.5    // Setpoint value. This is the process value that the process is
//                                                 // aiming for.
//                                                 // May be adjusted via MQTT using cmnd PidSp

//   #define PID_PROPBAND                  5       // Proportional band in process units (eg degrees). This controls
//                                                 // the gain of the loop and is the range of process value over which
//                                                 // the power output will go from 0 to full power. The units are that
//                                                 // of the process and setpoint, so for example in a heating
//                                                 // application it might be set to 1.5 degrees.
//                                                 // May be adjusted via MQTT using cmnd PidPb

//   #define PID_INTEGRAL_TIME             1800    // Integral time seconds. This is a setting for the integral time,
//                                                 // in seconds. It represents the time constant of the integration
//                                                 // effect. The larger the value the slower the integral effect will be.
//                                                 // Obviously the slower the process is the larger this should be. For
//                                                 // example for a domestic room heated by convection radiators a setting
//                                                 // of one hour might be appropriate (in seconds). To disable the
//                                                 // integral effect set this to a large number.
//                                                 // May be adjusted via MQTT using cmnd PidTi

//   #define PID_DERIVATIVE_TIME           15      // Derivative time seconds. This is a setting for the derivative time,
//                                                 // in seconds. It represents the time constant of the derivative effect.
//                                                 // The larger the value the greater will be the derivative effect.
//                                                 // Typically this will be set to somewhat less than 25% of the integral
//                                                 // setting, once the integral has been adjusted to the optimum value. To
//                                                 // disable the derivative effect set this to 0. When initially tuning a
//                                                 // loop it is often sensible to start with derivative zero and wind it in
//                                                 // once other parameters have been setup.
//                                                 // May be adjusted via MQTT using cmnd PidTd

//   #define PID_INITIAL_INT               0.5     // Initial integral value (0:1). This is an initial value which is used
//                                                 // to preset the integrated error value when the flow is deployed in
//                                                 // order to assist in homing in on the setpoint the first time. It should
//                                                 // be set to an estimate of what the power requirement might be in order
//                                                 // to maintain the process at the setpoint. For example for a domestic
//                                                 // room heating application it might be set to 0.2 indicating that 20% of
//                                                 // the available power might be required to maintain the setpoint. The
//                                                 // value is of no consequence apart from device restart.

//   #define PID_MAX_INTERVAL              300     // This is the maximum time in seconds that is expected between samples.
//                                                 // It is provided to cope with unusual situations such as a faulty sensor
//                                                 // that might prevent the node from being supplied with a process value.
//                                                 // If no new process value is received for this time then the power is set
//                                                 // to the value defined for PID_MANUAL_POWER.
//                                                 // May be adjusted via MQTT using cmnd PidMaxInterval

//   #define PID_DERIV_SMOOTH_FACTOR       3       // In situations where the process sensor has limited resolution (such as
//                                                 // the DS18B20), the use of deriviative can be problematic as when the
//                                                 // process is changing only slowly the steps in the value cause spikes in
//                                                 // the derivative. To reduce the effect of these this parameter can be
//                                                 // set to apply a filter to the derivative term. I have found that with
//                                                 // the DS18B20 that a value of 3 here can be beneficial, providing
//                                                 // effectively a low pass filter on the derivative at 1/3 of the derivative
//                                                 // time. This feature may also be useful if the process value is particularly
//                                                 // noisy. The smaller the value the greater the filtering effect but the
//                                                 // more it will reduce the effectiveness of the derivative. A value of zero
//                                                 // disables this feature.
//                                                 // May be adjusted via MQTT using cmnd PidDSmooth

//   #define PID_AUTO                      1       // Auto mode 1 or 0 (for manual). This can be used to enable or disable
//                                                 // the control (1=enable, auto mode, 0=disabled, manual mode). When in
//                                                 // manual mode the output is set the value definded for PID_MANUAL_POWER
//                                                 // May be adjusted via MQTT using cmnd PidAuto

//   #define PID_MANUAL_POWER              0       // Power output when in manual mode or fallback mode if too long elapses
//                                                 // between process values
//                                                 // May be adjusted via MQTT using cmnd PidManualPower

//   #define PID_UPDATE_SECS               0       // How often to run the pid algorithm (integer secs) or 0 to run the algorithm
//                                                 // each time a new pv value is received, for most applictions specify 0.
//                                                 // Otherwise set this to a time
//                                                 // that is short compared to the response of the process.  For example,
//                                                 // something like 15 seconds may well be appropriate for a domestic room
//                                                 // heating application.
//                                                 // May be adjusted via MQTT using cmnd PidUpdateSecs

//   #define PID_USE_TIMPROP               1       // To use an internal relay for a time proportioned output to drive the
//                                                 // process, set this to indicate which timeprop output to use. For a device
//                                                 // with just one relay then this will be 1.
//                                                 // USE_TIMEPROP will be automativally included. You must set the output as
//                                                 // explained in xdrv_48_timeprop.ino
//                                                 // To disable, override to false in user_config_override.h. If USE_TIMEPROP is
//                                                 // not explicitly defined, then it will not be added by default.

//   #define PID_USE_LOCAL_SENSOR                  // If defined then the local sensor will be used for pv. Leave undefined if
//                                                 // this is not required.  The rate that the sensor is read is defined by TELE_PERIOD
//                                                 // If not using the sensor then you can supply process values via MQTT using
//                                                 // cmnd PidPv

//   #define PID_SHUTTER                   1       // if using the PID to control a 3-way valve, create Tasmota Shutter and define the
//                                                 // number of the shutter here. Otherwise leave this commented out

//   #define PID_REPORT_MORE_SETTINGS    true      // If defined to true, the SENSOR output will provide more extensive json
//                                                 // output in the PID section. Override to false to reduce json output

#define USE_THERMOSTAT                           // Add support for Thermostat
    #define THERMOSTAT_CONTROLLER_OUTPUTS         1         // Number of outputs to be controlled independently
    #define THERMOSTAT_SENSOR_NAME                "DS18B20" // Name of the local sensor to be used
    #define THERMOSTAT_SENSOR_NUMBER              1         // Number of local sensors to be used
    #define THERMOSTAT_RELAY_NUMBER               1         // Default output relay number for the first controller (+i for following ones)
    #define THERMOSTAT_SWITCH_NUMBER              1         // Default input switch number for the first controller (+i for following ones)
    #define THERMOSTAT_TIME_ALLOW_RAMPUP          300       // Default time after last target update to allow ramp-up controller phase in minutes
    #define THERMOSTAT_TIME_RAMPUP_MAX            960       // Default time maximum ramp-up controller duration in minutes
    #define THERMOSTAT_TIME_RAMPUP_CYCLE          30        // Default time ramp-up cycle in minutes
    #define THERMOSTAT_TIME_SENS_LOST             30        // Maximum time w/o sensor update to set it as lost in minutes
    #define THERMOSTAT_TEMP_SENS_NUMBER           1         // Default temperature sensor number
    #define THERMOSTAT_TIME_MANUAL_TO_AUTO        60        // Default time without input switch active to change from manual to automatic in minutes
    #define THERMOSTAT_TIME_RESET                 12000     // Default reset time of the PI controller in seconds
    #define THERMOSTAT_TIME_PI_CYCLE              30        // Default cycle time for the thermostat controller in minutes
    #define THERMOSTAT_TIME_MAX_ACTION            20        // Default maximum thermostat time per cycle in minutes
    #define THERMOSTAT_TIME_MIN_ACTION            4         // Default minimum thermostat time per cycle in minutes
    #define THERMOSTAT_TIME_MIN_TURNOFF_ACTION    3         // Default minimum turnoff time in minutes, below it the thermostat will be held on
    #define THERMOSTAT_PROP_BAND                  4         // Default proportional band of the PI controller in degrees celsius
    #define THERMOSTAT_TEMP_RESET_ANTI_WINDUP     8         // Default range where reset antiwindup is disabled, in tenths of degrees celsius
    #define THERMOSTAT_TEMP_HYSTERESIS            1         // Default range hysteresis for temperature PI controller, in tenths of degrees celsius
    #define THERMOSTAT_TEMP_FROST_PROTECT         40        // Default minimum temperature for frost protection, in tenths of degrees celsius
    #define THERMOSTAT_TEMP_RAMPUP_DELTA_IN       4         // Default minimum delta temperature to target to get into rampup mode, in tenths of degrees celsius
    #define THERMOSTAT_TEMP_RAMPUP_DELTA_OUT      2         // Default minimum delta temperature to target to get out of the rampup mode, in tenths of degrees celsius
    #define THERMOSTAT_TEMP_PI_RAMPUP_ACC_E       200       // Default accumulated error when switching from ramp-up controller to PI in hundredths of degrees celsius
    #define THERMOSTAT_TIME_OUTPUT_DELAY          180       // Default output delay between state change and real actuation event (f.i. valve open/closed)
    #define THERMOSTAT_TEMP_INIT                  180       // Default init target temperature for the thermostat controller
    #define THERMOSTAT_TIME_MAX_OUTPUT_INCONSIST  3         // Default maximum time where the input and the output shall differ (for diagnostic) in minutes
    #define THERMOSTAT_TIME_MAX_AUTOTUNE          21600     // Maximum time for the PI autotune function to complete in seconds
    #define THERMOSTAT_DUTYCYCLE_AUTOTUNE         35        // Default duty cycle (in % over PI cycle time) for the step response of the autotune PI function
    #define THERMOSTAT_PEAKNUMBER_AUTOTUNE        8         // Default number of peak temperatures (max or min) to be used for the autotune PI function
    #define THERMOSTAT_TEMP_BAND_NO_PEAK_DET      1         // Default temperature band in thenths of degrees celsius within no peak will be detected
    #define THERMOSTAT_TIME_STD_DEV_PEAK_DET_OK   10        // Default standard deviation in minutes of the oscillation periods within the peak detection is successful    
    // #define USE_PI_AUTOTUNING // (Ziegler-Nichols closed loop method)


#endif  // _USER_CONFIG_OVERRIDE_H_
