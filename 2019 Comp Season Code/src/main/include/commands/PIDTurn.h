/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Command.h>

/**
 * Moves the  Elevator to a given height. This command finishes when it is within
 * the tolerance, but leaves the PID loop running to maintain the position.
 * Other commands using the Elevator should make sure they disable PID!
 */
class PIDTurn : public frc::Command {
 public:
  PIDTurn(double setpoint);
  void Initialize() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;

 private:
  double m_setpoint;
};
