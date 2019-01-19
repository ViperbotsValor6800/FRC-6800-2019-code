/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/PWMVictorSPX.h>
#include <frc/commands/Subsystem.h>
#include <frc/Solenoid.h>

class Forks : public frc::Subsystem
{
public:
  Forks();

  void InitDefaultCommand();
  void Deploy();
  void DisengageOutriggers();
  bool GetForkState();
  bool GetOutriggerState();

  bool deployed;

private:
    frc::Solenoid outriggers{1};
    frc::Solenoid forks{2};


};