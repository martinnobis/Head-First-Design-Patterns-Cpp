#include "remote_control_with_lambda.h"

#include "../Light/light.h"
#include "../Stereo/stereo.h"

int main(void)
{
    RemoteControlWithLambda remote_control;

    // Things to command
    Light living_room_light("Living Room");
    Stereo living_room_stereo("Living Room");

    // Assign commands to buttons on the remote.
    remote_control.SetCommand(0, [living_room_light]() { living_room_light.On(); }, [living_room_light]() { living_room_light.Off(); });
    remote_control.SetCommand(1, [living_room_stereo]() { living_room_stereo.On(); }, [living_room_stereo]() { living_room_stereo.Off(); });

    // Push some buttons.
    remote_control.OnButtonWasPushed(0);
    remote_control.OffButtonWasPushed(0);
    remote_control.OnButtonWasPushed(1);
    remote_control.OffButtonWasPushed(1);
}
