#include <stdio.h>

using std;

class Logger {
  private std::FileWriter writer;
  private std::String loggername;
  private u64 start_time;

  public Logger(std::String name);

  public void info(std::String s);
  public void warn(std::String s);
}
