#ifndef _REMOTE_CONTROL_WITH_LAMBDA_H_
#define _REMOTE_CONTROL_WITH_LAMBDA_H_

#include <functional>
#include <vector>

#include "../command.h"

class RemoteControlWithLambda
{
public:
  RemoteControlWithLambda();
  void SetCommand(int slot, std::function<void()> on_command, std::function<void()> off_command);
  void OnButtonWasPushed(int slot) const;
  void OffButtonWasPushed(int slot) const;

private:
  friend std::ostream &operator<<(std::ostream &, const RemoteControlWithLambda &);

private:
  int num_buttons_;
  std::vector<std::function<void()>> on_commands_;
  std::vector<std::function<void()>> off_commands_;
};

#endif // _REMOTE_CONTROL_WITH_LAMBDA_H_
