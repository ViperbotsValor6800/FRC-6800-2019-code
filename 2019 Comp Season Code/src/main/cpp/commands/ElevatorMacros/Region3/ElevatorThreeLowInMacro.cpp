#include "commands/ElevatorMacros/Region3/ElevatorThreeLowInMacro.h"
#include "Robot.h"

ElevatorThreeLowInMacro::ElevatorThreeLowInMacro()
{
    AddSequential(new SetIntakeMacro(true));
    AddSequential(new SetElevatorSetpointDefinite(Robot::m_elevator.kLowCargo));
    AddSequential(new SetHatch(true));
}