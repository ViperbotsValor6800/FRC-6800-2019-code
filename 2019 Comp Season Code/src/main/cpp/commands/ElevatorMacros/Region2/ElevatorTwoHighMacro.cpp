#include "commands/ElevatorMacros/Region2/ElevatorTwoHighMacro.h"
#include "Robot.h"

ElevatorTwoHighMacro::ElevatorTwoHighMacro()
{
    AddSequential(new SetElevatorSetpointDefinite(Robot::m_elevator.kLiftBarBottomSafe));
    AddSequential(new SetHatch(false));
    AddSequential(new WaitCommand(.2));
    AddSequential(new SetElevatorSetpointDefinite(Robot::m_elevator.kHighHatch));
    AddSequential(new SetHatch(true));
}
