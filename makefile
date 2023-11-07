# ----------------------------
# Makefile Options
# ----------------------------

NAME = Gateway
ICON = ./icon.png
DESCRIPTION = "Internet Gateway CE"
COMPRESSED = YES
ARCHIVED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
