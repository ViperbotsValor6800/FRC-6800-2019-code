#include "commands/ElevatorMacros/ElevatorFourLowMacro.h"
#include "Robot.h"

ElevatorFourLowMacro::ElevatorFourLowMacro()
{
    AddSequential(new SetIntakeMacro(true));
    AddSequential(new SetHatch(false));
    AddSequential(new WaitCommand(1));
    AddSequential(new SetElevatorSetpointDefinite(Robot::m_elevator.kLowCargo));
    AddSequential(new SetHatch(true));
}