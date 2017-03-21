#include <glib.h>
#include "xrmoptions.h"
void config_parse_xresource_options ( xcb_stuff *xcb ) {}

/**
 * @param filename The xresources file to parse
 *
 * Parses filename and updates the config
 * @ingroup CONFFile
 */
void config_parse_xresource_options_file ( const char *filename ) {}

/**
 * Parse commandline options.
 * @ingroup CONFCommandline
 */
void config_parse_cmd_options ( void ) {}

/**
 * Parse dynamic commandline options.
 * @ingroup CONFCommandline
 */
void config_parse_cmd_options_dynamic ( void ) {}

/**
 * @param xcb Handler object that holds connection to X11 server to fetch the settings from.
 *
 * Parse the rofi related X resource options of the
 * connected X server.
 *
 * @ingroup CONFXServer
 */
void config_parse_xresource_options_dynamic ( xcb_stuff *xcb ) {}

/**
 * @param filename The xresources file to parse
 *
 * Parses filename and updates the config. For dynamic options.
 * @ingroup CONFFile
 */
void config_parse_xresource_options_dynamic_file ( const char *filename ) {}

/**
 * Free any allocated memory.
 *
 * @ingroup CONFXResources
 */
void config_xresource_free ( void ) {}

/**
 * Dump the settings in a Xresources compatible way to
 * stdout.
 *
 * @ingroup CONFXResources
 */
void config_parse_xresource_dump ( void ) {}

/**
 * Dump the theme related settings in Xresources compatible way to
 * stdout.
 *
 * @ingroup CONFXResources
 */
void config_parse_xresources_theme_dump ( void ) {}

/**
 * @param type The type of the value
 * @param key  The key refering to this configuration option
 * @param value The value to update based [out][in]
 * @param comment Description of this configuration option
 *
 * Add option (at runtime) to the dynamic option parser.
 */
void config_parser_add_option ( XrmOptionType type, const char *key, void **value, const char *comment ) {}

/**
 * Print the current configuration to stdout. Uses bold/italic when printing to terminal.
 */
void print_options ( void ) {}

/**
 * @param option The name of the option
 * @param type   String describing the type
 * @param text   Description of the option
 * @param def    Current value of the option
 * @param isatty If printed to a terminal
 *
 * Function that does the markup for printing an configuration option to stdout.
 */
void print_help_msg ( const char *option, const char *type, const char*text, const char *def, int isatty ) {}

/**
 * @param length the length of the returned array
 *
 * Creates an array with a strings describing each keybinding.
 *
 * @returns an array of string with length elements
 */
char ** config_parser_return_display_help ( unsigned int *length ) { static gchar *r[] = { NULL }; *length = 0; return r; }
