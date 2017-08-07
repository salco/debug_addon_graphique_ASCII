/** Addon to use with debug console. Easy way to use an Ansi console.
 * I use Tera term but any terminal ANSI work.
 *
 * @see https://ttssh2.osdn.jp/index.html.en
 * @file
 * @todo voir un moyen de patcher les case coller 
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 *
 * @author Salco <JeSuisSalco@gmail.com>
 */

#ifndef ANSIGRAPHICALCONSOLE_H
#define ANSIGRAPHICALCONSOLE_H

/** Uncomment that to put delay in the display.
  */
//#define CONSOLE_DELAY_TEST
/** Uncomment that to use the debug from mbed.h
  */
#define USE_MBED_LIB

#if defined( CONSOLE_DELAY_TEST) || defined(USE_MBED_LIB)
    #include "mbed.h"
#endif

/** Adjust the define for a bigger buffer.
  */
#define BUFFER_LIMIT 50

/** Use to create a single line box.
  * @note the position X=0,Y=0 is at the top left.
  * @param[in] posX position in X to put the box.
  * @param[in] posY position in X to put the box.
  * @param[in] height lenght of the box for Y. 
  * @param[in] width  lenght of the box for X. 
  * @param[in] title  Title to show on top of the box.
  */
void createSLbox(int posX, int posY, int height, int width,const char* title=0);

/** Use to create a double line box.
  * @note the position X=0,Y=0 is at the top left.
  * @param[in] posX position in X to put the box.
  * @param[in] posY position in X to put the box.
  * @param[in] height lenght of the box for Y. 
  * @param[in] width  lenght of the box for X. 
  * @param[in] title  Title to show on top of the box.
  */
void createDLbox(int posX, int posY, int height, int width,const char* title=0);

/** Use to create a double line box.
  * @note the position X=0,Y=0 is at the top left.
  * @param[in] posX position in X to put the text.
  * @param[in] posY position in X to put the text.
  * @param[in] title  Text to show on screen.(Use like printf and other).
  */
void setText(int posX, int posY,const char* title,...);

/** Use to clear the screen
  */
void clearscreen(void);


#endif