#ifndef __CONFIG_CONTROL__
#define __CONFIG_CONTROL__

#define SHORTCUT_CONTENT_LEN ( 64 )
#define MAX_SHORTCUT_NUM ( 20 )
#define PREF_CONTENT_LEN ( 64 )
#define MAX_PREF_NUM ( 20 )
#define BASE MAX_SHORTCUT_NUM

int writeToConfig( char *keyName, char *value  );
char *readFromConfig( char *keyName, char *receive );
char **readFromConfigByKeyword ( char receive[][SHORTCUT_CONTENT_LEN], char *keyword );
char *readNameByKeyword ( char (*receive)[SHORTCUT_CONTENT_LEN], char *keyword );

#endif