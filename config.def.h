/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#768896",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* text color */
static char * text_color = "#ffffff";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "col_init",	STRING,  &colorname[INIT] },
	{ "col_input",	STRING,  &colorname[INPUT] },
	{ "col_failed",	STRING,  &colorname[FAILED] },
	{ "col_fg",		STRING,  &text_color },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 15;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
