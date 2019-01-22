/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/DigitalInput.h>
#include <frc/VictorSP.h>
#include <frc/commands/Subsystem.h>

class Carriage : public frc::Subsystem
{
public:
  Carriage();

  void InitDefaultCommand();
  void SetMotors(double val);
  void SetMotors(double leftVal, double rightVal);
  void Stop();
  bool IsPhotoelectric();

  double GetMotorL();
  double GetMotorR();
  frc::DigitalInput m_photoelectric{10}; // TODO: Get port here

private:
    frc::VictorSP m_leftMotor{8};
    frc::VictorSP m_rightMotor{9};
};
