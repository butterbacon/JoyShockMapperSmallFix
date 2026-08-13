# JoyShockMapper (SmallFix)

This is a fork of `evan1mclean/JSM_custom_curve` which is a fork of `Electronicks/JoyShockMapper` which is a fork of `JibbSmart/JoyShockMapper`. I chose to use this as base because they moved to SDL3 while the previous ones are still in SDL2.

I'm only interested in adding small fixes and additions to the `JoyShockMapper.exe` and not the GUI that `JSM custom curve` introduced because this is just for my personal use.

## Changes
### 1.0
- Added: 32-bit Windows build
- Added: `CENTER_MOUSE` command to snap the mouse cursor back to the center of the screen. Useful for re-centering gyro cursor
- Added: Support for `_default.txt` on the autoload directory as fallback mapping
- Fixed: `MOUSE_RING` is now centered on the screen. There was a typo in the source code which caused it to show up at the bottom of the screen

### 1.1
- Added: Support for more keyboard keys that can be mapped. (BROWSER_BACK, BROWSER_FORWARD, BROWSER_REFRESH, BROWSER_STOP, BROWSER_SEARCH, BROWSER_FAVORITES, BROWSER_HOME, LAUNCH_MAIL, LAUNCH_MEDIA_SELECT, LAUNCH_APP1, LAUNCH_APP2)
- Fixed: Issue where autoload feature has problems detecting full executable name when it contains a dot (.) besides the one for the file extension. (for example, Playnite)

## Download
[Go to the releases section](https://github.com/butterbacon/JoyShockMapperSmallFix/releases)

## Links
- Full JSM documentation: https://github.com/Electronicks/JoyShockMapper
- GyroWiki: http://gyrowiki.jibbsmart.com
