/* user and group to drop privileges to */
static const char *user  = "brayan";
static const char *group = "brayan";

/* Font settings for the time text */
static const float textsize = 64.0;
static const char *textfamily = "serif";
static const double textcolorred = 132.0 / 255.0;
static const double textcolorgreen = 3.0 / 255.0;
static const double textcolorblue = 252.0 / 255.0;

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Enable blur */
#define BLUR
/* Set blur radius */
static const int blurRadius = 5;
/* Enable Pixelation */
#define PIXELATION
/* Set pixelation radius */
static const int pixelSize = 8;
