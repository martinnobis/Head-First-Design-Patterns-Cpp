#ifndef _REMOTE_CONTROL_H_
#define _REMOTE_CONTROL_H_

#include <memory>
#include <vector>

#include "command.h"

class RemoteControl
{
  public:
    RemoteControl();
    void SetCommand(std::shared_ptr<Command> on_command, std::shared_ptr<Command> off_command, int slot);
    void OnButtonWasPushed(int slot) const;
    void OffButtonWasPushed(int slot) const;

  private:
    friend std::ostream& operator<<(std::ostream&, const RemoteControl&);

  private:
    int num_buttons_;
    std::vector<std::shared_ptr<Command>> on_commands_;
    std::vector<std::shared_ptr<Command>> off_commands_;
};

#endif // _REMOTE_CONTROL_H_
