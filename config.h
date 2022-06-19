//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {" [ ",  "st-nettraf",  1,  0},
  {"] [ ",  "setxkbmap -query | grep layout | tr -d '[:space:]' | cut -d ':' -f 2",  0,  11},
  {"] [ ",  "st-internet",  10,  0},
  {"] [ ",  "st-battary",  10,  0},
  {"] [ ",  "st-volume", 0,  10},
  {"] ",  "st-clock",  59, 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
