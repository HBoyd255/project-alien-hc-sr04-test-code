/**
 * @file systemInfo.h
 * @brief Definition for constant values related to the hardware setup for the
 * ultrasonic sensor.
 *
 * @author Harry Boyd - https://github.com/HBoyd255
 * @date 2024-08-13
 * @copyright Copyright (c) 2024
 */
#ifndef SYSTEM_INFO_H
#define SYSTEM_INFO_H

// Serial
#define SERIAL_BAUD_RATE 230400

// Ultrasonic
#define ULTRASONIC_TRIGGER D7
#define ULTRASONIC_ECHO D6
#define ULTRASONIC_TIMEOUT_MICROSECONDS 20000UL

#endif  // SYSTEM_INFO_H