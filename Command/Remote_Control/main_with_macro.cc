#include <iostream>
#include <memory>

#include "remote_control_with_undo.h"

#include "Light/light_on_command.h"
#include "Light/light_off_command.h"
#include "Light/light.h"

#include "Stereo/stereo_on_command.h"
#include "Stereo/stereo_off_command.h"
#include "Stereo/stereo.h"

#include "macro_command.h"

int main(void)
{
    RemoteControlWithUndo remote_control;
    // Things to command
    Light living_room_light("Living Room");
    Stereo living_room_stereo("Living Room");

    // Commands
    auto living_room_light_on = std::make_shared<LightOnCommand>(living_room_light);
    auto living_room_light_off = std::make_shared<LightOffCommand>(living_room_light);

    auto living_room_stereo_on = std::make_shared<StereoOnCommand>(living_room_stereo);
    auto living_room_stereo_off = std::make_shared<StereoOffCommand>(living_room_stereo);

    std::vector<std::shared_ptr<Command>> on_commands;
    on_commands.push_back(living_room_light_on);
    on_commands.push_back(living_room_stereo_on);

    std::vector<std::shared_ptr<Command>> off_commands;
    off_commands.push_back(living_room_light_off);
    off_commands.push_back(living_room_stereo_off);

    auto macro_command_on = std::make_shared<MacroCommand>(on_commands);
    auto macro_command_off = std::make_shared<MacroCommand>(off_commands);

    // Assign macro command to button on the remote.
    remote_control.SetCommand(0, macro_command_on, macro_command_off);

    std::cout << remote_control << std::endl
              << std::endl;

    // Push some buttons.
    remote_control.OnButtonWasPushed(0);
    remote_control.OffButtonWasPushed(0);

    // Print out again to see the MacroCommand in the undo slot.
    std::cout << remote_control << std::endl
              << std::endl;
}
