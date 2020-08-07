static const char norm_fg[] = "#efefef";
static const char norm_bg[] = "#090a0c";
static const char norm_border[] = "#797c82";

static const char sel_fg[] = "#f99569";
static const char sel_bg[] = "#090a0c";
static const char sel_border[] = "#adb2ba";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win

    [SchemeStatus]  = { norm_fg, norm_bg, "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
    [SchemeTagsSel]  = { sel_fg, norm_bg,  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
    [SchemeTagsNorm]  = { norm_fg, norm_bg,  "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
    [SchemeInfoSel]  = { sel_fg, norm_bg,  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
    [SchemeInfoNorm]  = { norm_fg, norm_bg,  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
};
