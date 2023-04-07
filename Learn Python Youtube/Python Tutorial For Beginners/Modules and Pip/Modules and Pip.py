# modules are external python files that we can import into the existing python file
# all functions, variables, and data from module is available

# Python Module Index Version 3.11.1: https://docs.python.org/3/py-modindex.html
# External Libraries/Lib - gives access to External Modules that can be imported for use
# Built-in modules are automatically available

# Third Party Modules can be installed with pip on the Command Prompt
# pip is a package manager meaning it can install, manage, update, and uninstall different python modules
# Third Party Modules once installed will be most likely places in External Libraries/Lib/site-packages
import useful_tools

print(useful_tools.roll_dice(10))
