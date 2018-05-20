#include "light_on_command.h"

void LightOnCommand::Execute(void) const {
    light_.On();
}

void LightOnCommand::Undo(void) const {
    light_.Off();
}
