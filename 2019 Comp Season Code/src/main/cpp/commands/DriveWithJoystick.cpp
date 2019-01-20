/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DriveWithJoystick.h"

#include "Robot.h"

DriveWithJoystick::DriveWithJoystick() { Requires(&Robot::m_drivetrain); }

// Called repeatedly when this Command is scheduled to run
void DriveWithJoystick::Execute() {
  auto& joystickL = Robot::m_oi.GetLeftJoyDrive();
  auto& joystickR = Robot::m_oi.GetRightJoyDrive();
  auto& shifter = Robot::m_oi.GetShifter();
  Robot::m_drivetrain.TankDrive(std::abs(joystickL.GetY()) > 0.05 ? joystickL.GetY() : 0, std::abs(joystickR.GetY()) > 0.05 ? joystickR.GetY() : 0);
  Robot::m_drivetrain.SetShifter(shifter.Get());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoystick::IsFinished() { return false; }

// Called once after isFinished returns true
void DriveWithJoystick::End() { Robot::m_drivetrain.Stop(); }
