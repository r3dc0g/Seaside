#!/usr/bin/env bash

## Author : Aditya Shakya (adi1090x)
## Mail : adi1090x@gmail.com
## browser : @adi1090x
## music : @adi1090x

rofi_command="rofi -theme android/six.rasi"

# Links
terminal=""
files=""
editor=""
browser=""
music=""
mail=""

# Variable passed to rofi
options="$terminal\n$files\n$editor\n$browser\n$music\n$mail"

chosen="$(echo -e "$options" | $rofi_command -p "Most Used" -dmenu -selected-row 0)"
case $chosen in
    $terminal)
        termite &
        ;;
    $files)
        thunar &
        ;;
    $editor)
        lowriter &
        ;;
    $browser)
	firefox &
        ;;
    $music)
        rhythmbox &
        ;;
    $mail)
        thunderbird &
        ;;
esac

