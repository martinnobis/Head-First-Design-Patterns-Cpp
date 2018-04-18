#include <iostream>
#include <memory>

#include "light_on_command.h"
#include "light.h"
#include "simple_remote_control.h"

int main(void) {
    std::cout << "Hello, World!" << std::endl;

    Light light;
    auto light_on = std::make_shared<LightOnCommand>(light);

    SimpleRemoteControl remote;
    remote.SetCommand(light_on);
    remote.ButtonWasPressed();
}