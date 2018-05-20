#include <iostream>
#include <memory>

#include "remote_control.h"

#include "Light/light_on_command.h"
#include "Light/light_off_command.h"
#include "Light/light.h"

int main(void) {
    Light light;
    auto light_on = std::make_shared<LightOnCommand>(light);
    auto light_off = std::make_shared<LightOffCommand>(light);

    RemoteControl remote;
    std::cout << remote << std::endl;
    remote.SetCommand(light_on, light_off, 1);
    std::cout << remote << std::endl;
    remote.OnButtonWasPushed(1);
}