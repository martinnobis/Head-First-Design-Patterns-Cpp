#ifndef _REMOTE_CONTROL_WITH_UNDO_H_
#define _REMOTE_CONTROL_WITH_UNDO_H_

#include <memory>
#include <vector>

#include "command.h"

class RemoteControlWithUndo
{
public:
  RemoteControlWithUndo();
  void SetCommand(int slot, std::shared_ptr<Command> on_command, std::shared_ptr<Command> off_command);
  void OnButtonWasPushed(int slot);
  void OffButtonWasPushed(int slot);
  void UndoButtonWasPushed(void);

private:
  friend std::ostream &operator<<(std::ostream &, const RemoteControlWithUndo &);

private:
  int num_buttons_;
  std::vector<std::shared_ptr<Command>> on_commands_;
  std::vector<std::shared_ptr<Command>> off_commands_;
  std::shared_ptr<Command> undo_command_;
};

#endif // _REMOTE_CONTROL_WITH_UNDO_H_
