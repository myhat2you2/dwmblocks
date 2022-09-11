//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*icon		command		interval	signal*/
	/*
	 * {"",		"record",	0,		12},
	 * {"",		"music",	0,		11},
	 */
	 {"",		"clock",	15,		10},
	 {"",		"volume",	0,		 9},
	 {"",		"memory",	30,		 8},
	 {"",		"cpu",		30,		 7},
	 {"",		"disk /home",	30,		 6},
	 //{"",		"mail",		0,		 5},
	 //{"",		"updates",	0,		 4},
	 //{"",		"torrent",	0,		 3},
	 {"",		"internet",	10,		 2},
	 {"",		"battery",	30,		 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

//auto recompile and run with this command in vimrc/init.vim
//autocmd BufWritePost ~/.local/src/dwmbocks.config.h !cd ~/.local/src/dwblocks/; sudo make install && killall -q dwmblocks;setsid dwmblocks & }
