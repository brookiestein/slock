/* user and group to drop privileges to */
static const char *user  = "brayan";
static const char *group = "brayan";

/* Font settings for the time text. */
static const float textsize = 64.0;
static const char* textfamily = "serif";
static const double textcolorred = 132.0 / 255.0;
static const double textcolorgreen = 3.0 / 255.0;
static const double textcolorblue = 252.0 / 255.0;

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[PAM] =    "#9400D3",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* Background image path, should be available to the user above. */
static const char *background_image = "/home/brayan/Wallpapers/wallhaven-gwwxwl_1920x1080.png";

/* PAM service that's used for authentication */
static const char *pam_service = "login";
