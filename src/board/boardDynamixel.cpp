#include "../include/board/boardDynamixel.h"
#include <iostream>

using namespace controller;

/// A single instance of BoardDynamixel
BoardDynamixel::Ptr boardDynamixel;

BoardDynamixel::BoardDynamixel(void) : Board("Board Dynamixel", TYPE_USB2DYNAMIXEL) {
}

BoardDynamixel::~BoardDynamixel(void) {
}

/// Set reference position value for servomotor, returns error value
unsigned int BoardDynamixel::setPosition(unsigned char legNo, unsigned char jointNo, float_type angle){
    return 0;
}

/// Set reference position value for servomotors, returns error value
unsigned int BoardDynamixel::setPosition(unsigned char legNo, const std::vector<float_type>& angle){
    return 0;
}

/// Set reference position value for servomotors, returns error value
unsigned int BoardDynamixel::setPosition(const std::vector<float_type>& angle){
    return 0;
}

/// Set reference speed value for servomotor, returns error value
unsigned int BoardDynamixel::setSpeed(unsigned char legNo, unsigned char jointNo, float_type speed){
    return 0;
}

/// Set reference speed value for servomotors, returns error value
unsigned int BoardDynamixel::setSpeed(unsigned char legNo, const std::vector<float_type>& speed){
    return 0;
}

/// Set reference speed value for servomotors, returns error value
unsigned int BoardDynamixel::setSpeed(const std::vector<float_type>& speed){
    return 0;
}

/// Set compliance margin [0,254]- dead zone -- for this area the torque is zero, returns error value
unsigned int BoardDynamixel::setComplianceMargin(unsigned char legNo, unsigned char jointNo, float_type margin){
    return 0;
}

/// Set compliance margins [0,254]- dead zone -- for this area the torque is zero, returns error value
unsigned int BoardDynamixel::setComplianceMargin(unsigned char legNo, const std::vector<float_type> margin){
    return 0;
}

/// Set compliance margins [0,254]- dead zone -- for this area the torque is zero, returns error value
unsigned int BoardDynamixel::setComplianceMargin(const std::vector<float_type> margin){
    return 0;
}

/// Set compiance slope [1,254] - the area with the reduced torque, returns error value
unsigned int BoardDynamixel::setComplianceSlope(unsigned char legNo, unsigned char jointNo, float_type slope){
    return 0;
}

/// Set compiance slope [1,254] - the area with the reduced torque, returns error value
unsigned int BoardDynamixel::setComplianceSlope(unsigned char legNo, const std::vector<float_type>& slope){
    return 0;
}

/// Set compiance slope [1,254] - the area with the reduced torque, returns error value
unsigned int BoardDynamixel::setComplianceSlope(const std::vector<float_type>& slope){
    return 0;
}

/// Set torque limit torque_limit [0,1023] - the torque limit, returns error value
unsigned int BoardDynamixel::setTorqueLimit(unsigned char legNo, unsigned char jointNo, float_type torqueLimit){
    return 0;
}

/// Set torque limit torque_limit [0,1023] - the torque limit, returns error value
unsigned int BoardDynamixel::setTorqueLimit(unsigned char legNo, const std::vector<float_type>& torqueLimit){
    return 0;
}

/// Set torque limit torque_limit [0,1023] - the torque limit, returns error value
unsigned int BoardDynamixel::setTorqueLimit(const std::vector<float_type>& torqueLimit){
    return 0;
}

/// Returns current position of the servomotor, returns error value
unsigned int BoardDynamixel::readPosition(unsigned char legNo, unsigned char jointNo, float_type& angle){
    return 0;
}

/// Returns current position of the servomotors, returns error value
unsigned int BoardDynamixel::readPositions(unsigned char legNo, const std::vector<float_type>& angle){
    return 0;
}

/// Returns current position of the servomotor, returns error value
unsigned int BoardDynamixel::readPosition(const std::vector<float_type>& angle){
    return 0;
}

/// Returns contact force from 1-axis force sensor
unsigned int BoardDynamixel::readForce(unsigned char legNo, float_type& contactForce){
    return 0;
}

/// Returns contact force from 1-axis force sensor
unsigned int BoardDynamixel::readForce(const std::vector<float_type>& contactForce){
    return 0;
}

/// Returns contact force from 3-axis torque/force sensor
unsigned int BoardDynamixel::readTorqueForce(unsigned char legNo, TorqueForce& valueTF){
    return 0;
}

/// Returns contact force from 3-axis torque/force sensor
unsigned int BoardDynamixel::readTorqueForce(const std::vector<float_type>& valueTF){
    return 0;
}

/// Returns contact or from microswitch
bool BoardDynamixel::readContact(unsigned char legNo){
    return false;
}

/// Returns contact or from microswitches
void BoardDynamixel::readContact(const std::vector<bool> contact){

}

/// Returns current from servo
unsigned int BoardDynamixel::readCurrent(unsigned char legNo, unsigned char jointNo, float_type& servoCurrent){
    return 0;
}

/// Returns current from servo
unsigned int BoardDynamixel::readCurrent(unsigned char legNo, const std::vector<float_type>& servoCurrent){
    return 0;
}

/// Returns current from servo
unsigned int BoardDynamixel::readCurrent(const std::vector<float_type>& servoCurrent){
    return 0;
}

/// Returns torque/load from servo
unsigned int BoardDynamixel::readTorque(unsigned char legNo, unsigned char jointNo, float_type& servoTorque){
    return 0;
}

/// Returns torque/load from servo
unsigned int BoardDynamixel::readTorque(unsigned char legNo, const std::vector<float_type>& servoTorque){
    return 0;
}

/// Returns torque/load from servo
unsigned int BoardDynamixel::readTorque(const std::vector<float_type>& servoTorque){
    return 0;
}

/// Set servo Offset
void BoardDynamixel::setOffset(unsigned char legNo, unsigned char jointNo, float_type offset){

}

/// Set servo Offset
void BoardDynamixel::setOffset(unsigned char legNo, const std::vector<float_type> offset){

}

/// Set servo Offset
void BoardDynamixel::setOffset(const std::vector<float_type> offset){

}

/// Board configuration -- set default value
void BoardDynamixel::setDefault(void){ }

controller::Board* controller::createBoardDynamixel(void) {
    boardDynamixel.reset(new BoardDynamixel());
    return boardDynamixel.get();
}
