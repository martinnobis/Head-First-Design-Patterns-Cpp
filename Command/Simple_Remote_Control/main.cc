#include <memory>

#include "light.h"
#include "light_on_command.h"
#include "simple_remote_control.h"

int main(void) {
    SimpleRemoteControl remote;
    Light light;
    std::shared_ptr<Command> light_on = std::make_shared<LightOnCommand>(light);

    remote.SetCommand(light_on);
    remote.ButtonWasPressed();
}
