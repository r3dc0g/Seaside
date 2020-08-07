#!/bin/bash

rofi_command="rofi -theme ~/.config/rofi/android/six.rasi"

# Links
apps=""
music=""
quickLinks=""
launcher=""
powermenu=""
screenshot=""

# Variables passed to rofi
options="$apps\n$music\n$quickLinks\n$launcher\n$powermenu\n$screenshot"

chosen="$(echo -e "$options" | $rofi_command -p "Hub" -dmenu -selected-row 0)"
case $chosen in
    $apps)
        ~/.config/rofi/android/apps.sh &
        ;;
    $music)
        ~/.config/rofi/android/mpd.sh &
        ;;
    $quickLinks)
        ~/.config/rofi/android/quicklinks.sh &
        ;;
    $launcher)
        ~/.config/rofi/launchers/launcher.sh &
        ;;
    $powermenu)
        ~/.config/rofi/android/powermenu.sh &
        ;;
    $screenshot)
        ~/.config/rofi/android/screenshot.sh &
        ;;
esac
