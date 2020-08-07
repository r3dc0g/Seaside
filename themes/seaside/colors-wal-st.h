const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090a0c", /* black   */
  [1] = "#5E4E59", /* red     */
  [2] = "#BE363C", /* green   */
  [3] = "#EA2D2F", /* yellow  */
  [4] = "#9C505A", /* blue    */
  [5] = "#EE5C54", /* magenta */
  [6] = "#F99569", /* cyan    */
  [7] = "#adb2ba", /* white   */

  /* 8 bright colors */
  [8]  = "#797c82",  /* black   */
  [9]  = "#6f5d69",  /* red     */
  [10] = "#cd4c52", /* green   */
  [11] = "#EF5D5F", /* yellow  */
  [12] = "#b16871", /* blue    */
  [13] = "#f17a74", /* magenta */
  [14] = "#faa885", /* cyan    */
  [15] = "#adb2ba", /* white   */

  /* special colors */
  [256] = "#090a0c", /* background */
  [257] = "#adb2ba", /* foreground */
  [258] = "#adb2ba",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 256;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
