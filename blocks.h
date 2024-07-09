//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  /* {"",      "~/src/suckless/dwmblocks/scripts/player-cmus.sh", 10, 0}, */
  /* {"",      "~/src/suckless/dwmblocks/scripts/task.sh", 400, 12}, */
  {"",    "~/.scripts/kernel.sh",             1000, 13},
  {"",    "~/.scripts/volume.sh",                0, 10},
  {"",    "~/.scripts/hd_space_root.sh",         30, 0},
  {"",    "~/.scripts/hd_space_media.sh",        30, 0},
  {"",    "~/.scripts/cpu.sh",                   3, 11},
	{"",    "~/.scripts/memory.sh",	                6, 1},
	{"",    "~/.scripts/clock.sh",					        5, 0},
  {"",    "~/.scripts/updates.sh",              360, 9},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

