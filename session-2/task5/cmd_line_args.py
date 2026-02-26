
"""
Python accesses command line data through argv from the sys module
Test the code:
  python cmd_line_args.py abc 123 hello
"""

import sys

print(f"Number of args: {len(sys.argv)}")
print(f"argv: {sys.argv}")

# what is printed? "1 argument the script name" 
# what form is the data?
"""
  - Mechanism: sys.argv is a list containing command-line data provided when the script starts.
  - Indexing: sys.argv[0] is always the script name, so the argument count is at least 1 even with no extra data.
  - Data Type: All arguments are stored as strings and must be converted (e.g., int()) for numerical use.
"""
