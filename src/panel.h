#ifndef __PANEL__
#define __PANEL__


void remove_widget ( GtkWidget *widget, void *container );

void Settings(GtkWidget *menuItemSetting, SettingWindowData *settingWindowData);

void Exit(GtkWidget *exit, SettingWindowData *swd);

void Restart(GtkWidget *restart, SettingWindowData *swd);

void settingWindow(GtkWidget  *menuItemSetting, SettingWindowData *settingWindowData);

void iconShowTimeSetting( SettingWindowData *settingWindowData  );

void shortcutSetting(  SettingWindowData *settingWindowData   );

void iconPositionSetting ( SettingWindowData *settingWindow );

void windowPrefSetting ( SettingWindowData *settingWindow );


void on_configure_event_cb ( 
        GtkWindow *window,
        GdkEvent *event,
        SettingWindowData *settingWindowData );

typedef void (*Super)(
        GtkWindow *window,
        GdkEvent *event,
        SettingWindowData *settingWindowData );

#endif