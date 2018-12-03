//
// Created by estebagel on 12/2/18.
//

#ifndef UE4_ICHU_SDL_HINTS_H
#define UE4_ICHU_SDL_HINTS_H

/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2018 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/**
 *  \file SDL_hints.h
 *
 *  Official documentation for SDL configuration variables
 *
 *  This file contains functions to set and get configuration hints,
 *  as well as listing each of them alphabetically.
 *
 *  The convention for naming hints is SDL_HINT_X, where "SDL_X" is
 *  the environment variable that can be used to override the default.
 *
 *  In general these hints are just that - they may or may not be
 *  supported or applicable on any given platform, but they provide
 *  a way for an application or user to give the library a hint as
 *  to how they would like the library to work.
 */

#include "/home/estebagel/UE_4.20-unstoppable/Engine/Source/ThirdParty/SDL2/SDL-gui-backend/include/SDL_hints.h"

#include "/home/estebagel/UE_4.20-unstoppable/Engine/Source/ThirdParty/SDL2/SDL-gui-backend/include/begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif



/**
 *  \brief  A variable that lets you manually hint extra gamecontroller db entries.
 *
 *  The variable should be newline delimited rows of gamecontroller config data, see SDL_gamecontroller.h
 *
 *  This hint must be set before calling SDL_Init(SDL_INIT_GAMECONTROLLER)
 *  You can update mappings after the system is initialized with SDL_GameControllerMappingForGUID() and SDL_GameControllerAddMapping()
 */
#define SDL_HINT_GAMECONTROLLERCONFIG "SDL_GAMECONTROLLERCONFIG"

/**
 *  \brief  A variable containing a list of devices to skip when scanning for game controllers.
 *
 *  The format of the string is a comma separated list of USB VID/PID pairs
 *  in hexadecimal form, e.g.
 *
 *      0xAAAA/0xBBBB,0xCCCC/0xDDDD
 *
 *  The variable can also take the form of @file, in which case the named
 *  file will be loaded and interpreted as the value of the variable.
 */
#define SDL_HINT_GAMECONTROLLER_IGNORE_DEVICES "SDL_GAMECONTROLLER_IGNORE_DEVICES"

/**
 *  \brief  If set, all devices will be skipped when scanning for game controllers except for the ones listed in this variable.
 *
 *  The format of the string is a comma separated list of USB VID/PID pairs
 *  in hexadecimal form, e.g.
 *
 *      0xAAAA/0xBBBB,0xCCCC/0xDDDD
 *
 *  The variable can also take the form of @file, in which case the named
 *  file will be loaded and interpreted as the value of the variable.
 */
#define SDL_HINT_GAMECONTROLLER_IGNORE_DEVICES_EXCEPT "SDL_GAMECONTROLLER_IGNORE_DEVICES_EXCEPT"


/**
 *  \brief  A variable controlling whether the HIDAPI joystick drivers should be used.
 *
 *  This variable can be set to the following values:
 *    "0"       - HIDAPI drivers are not used
 *    "1"       - HIDAPI drivers are used (the default)
 *
 *  This variable is the default for all drivers, but can be overridden by the hints for specific drivers below.
 */
#define SDL_HINT_JOYSTICK_HIDAPI "SDL_JOYSTICK_HIDAPI"

/**
 *  \brief  A variable controlling whether the HIDAPI driver for PS4 controllers should be used.
 *
 *  This variable can be set to the following values:
 *    "0"       - HIDAPI driver is not used
 *    "1"       - HIDAPI driver is used
 *
 *  The default is the value of SDL_HINT_JOYSTICK_HIDAPI
 */
#define SDL_HINT_JOYSTICK_HIDAPI_PS4 "SDL_JOYSTICK_HIDAPI_PS4"

/**
 *  \brief  A variable controlling whether extended input reports should be used for PS4 controllers when using the HIDAPI driver.
 *
 *  This variable can be set to the following values:
 *    "0"       - extended reports are not enabled (the default)
 *    "1"       - extended reports
 *
 *  Extended input reports allow rumble on Bluetooth PS4 controllers, but
 *  break DirectInput handling for applications that don't use SDL.
 *
 *  Once extended reports are enabled, they can not be disabled without
 *  power cycling the controller.
 */
#define SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE "SDL_JOYSTICK_HIDAPI_PS4_RUMBLE"

/**
 *  \brief  A variable controlling whether the HIDAPI driver for Steam Controllers should be used.
 *
 *  This variable can be set to the following values:
 *    "0"       - HIDAPI driver is not used
 *    "1"       - HIDAPI driver is used
 *
 *  The default is the value of SDL_HINT_JOYSTICK_HIDAPI
 */
#define SDL_HINT_JOYSTICK_HIDAPI_STEAM "SDL_JOYSTICK_HIDAPI_STEAM"

/**
 *  \brief  A variable controlling whether the HIDAPI driver for Nintendo Switch controllers should be used.
 *
 *  This variable can be set to the following values:
 *    "0"       - HIDAPI driver is not used
 *    "1"       - HIDAPI driver is used
 *
 *  The default is the value of SDL_HINT_JOYSTICK_HIDAPI
 */
#define SDL_HINT_JOYSTICK_HIDAPI_SWITCH "SDL_JOYSTICK_HIDAPI_SWITCH"

/**
 *  \brief  A variable controlling whether the HIDAPI driver for XBox controllers should be used.
 *
 *  This variable can be set to the following values:
 *    "0"       - HIDAPI driver is not used
 *    "1"       - HIDAPI driver is used
 *
 *  The default is the value of SDL_HINT_JOYSTICK_HIDAPI
 */
#define SDL_HINT_JOYSTICK_HIDAPI_XBOX   "SDL_JOYSTICK_HIDAPI_XBOX"

/**
 *  \brief  A variable that controls whether Steam Controllers should be exposed using the SDL joystick and game controller APIs
 *
 *  The variable can be set to the following values:
 *    "0"       - Do not scan for Steam Controllers
 *    "1"       - Scan for Steam Controllers (the default)
 *
 *  The default value is "1".  This hint must be set before initializing the joystick subsystem.
 */
#define SDL_HINT_ENABLE_STEAM_CONTROLLERS "SDL_ENABLE_STEAM_CONTROLLERS"




/**
 *  \brief If set to 1, then do not allow high-DPI windows. ("Retina" on Mac and iOS)
 */
#define SDL_HINT_VIDEO_HIGHDPI_DISABLED "SDL_VIDEO_HIGHDPI_DISABLED"



/**
 * \brief Android APK expansion main file version. Should be a string number like "1", "2" etc.
 *
 * Must be set together with SDL_HINT_ANDROID_APK_EXPANSION_PATCH_FILE_VERSION.
 *
 * If both hints were set then SDL_RWFromFile() will look into expansion files
 * after a given relative path was not found in the internal storage and assets.
 *
 * By default this hint is not set and the APK expansion files are not searched.
 */
#define SDL_HINT_ANDROID_APK_EXPANSION_MAIN_FILE_VERSION "SDL_ANDROID_APK_EXPANSION_MAIN_FILE_VERSION"

/**
 * \brief Android APK expansion patch file version. Should be a string number like "1", "2" etc.
 *
 * Must be set together with SDL_HINT_ANDROID_APK_EXPANSION_MAIN_FILE_VERSION.
 *
 * If both hints were set then SDL_RWFromFile() will look into expansion files
 * after a given relative path was not found in the internal storage and assets.
 *
 * By default this hint is not set and the APK expansion files are not searched.
 */
#define SDL_HINT_ANDROID_APK_EXPANSION_PATCH_FILE_VERSION "SDL_ANDROID_APK_EXPANSION_PATCH_FILE_VERSION"


/**
* \brief A variable to control whether we trap the Android back button to handle it manually.
*        This is necessary for the right mouse button to work on some Android devices, or
*        to be able to trap the back button for use in your code reliably.  If set to true,
*        the back button will show up as an SDL_KEYDOWN / SDL_KEYUP pair with a keycode of
*        SDL_SCANCODE_AC_BACK.
*
* The variable can be set to the following values:
*   "0"       - Back button will be handled as usual for system. (default)
*   "1"       - Back button will be trapped, allowing you to handle the key press
*               manually.  (This will also let right mouse click work on systems
*               where the right mouse button functions as back.)
*
* The value of this hint is used at runtime, so it can be changed at any time.
*/
#define SDL_HINT_ANDROID_TRAP_BACK_BUTTON "SDL_ANDROID_TRAP_BACK_BUTTON"

/**
* \brief A variable to control whether the return key on the soft keyboard
*        should hide the soft keyboard on Android and iOS.
*
* The variable can be set to the following values:
*   "0"       - The return key will be handled as a key event. This is the behaviour of SDL <= 2.0.3. (default)
*   "1"       - The return key will hide the keyboard.
*
* The value of this hint is used at runtime, so it can be changed at any time.
*/
#define SDL_HINT_RETURN_KEY_HIDES_IME "SDL_RETURN_KEY_HIDES_IME"

/**
 *  \brief Tell SDL not to catch the SIGINT or SIGTERM signals.
 *
 * This hint only applies to Unix-like platforms.
 *
 * The variable can be set to the following values:
 *   "0"       - SDL will install a SIGINT and SIGTERM handler, and when it
 *               catches a signal, convert it into an SDL_QUIT event.
 *   "1"       - SDL will not install a signal handler at all.
 */
#define SDL_HINT_NO_SIGNAL_HANDLERS   "SDL_NO_SIGNAL_HANDLERS"

/**
 *  \brief Prevent SDL from using version 4 of the bitmap header when saving BMPs.
 *
 * The bitmap header version 4 is required for proper alpha channel support and
 * SDL will use it when required. Should this not be desired, this hint can
 * force the use of the 40 byte header version which is supported everywhere.
 *
 * The variable can be set to the following values:
 *   "0"       - Surfaces with a colorkey or an alpha channel are saved to a
 *               32-bit BMP file with an alpha mask. SDL will use the bitmap
 *               header version 4 and set the alpha mask accordingly.
 *   "1"       - Surfaces with a colorkey or an alpha channel are saved to a
 *               32-bit BMP file without an alpha mask. The alpha channel data
 *               will be in the file, but applications are going to ignore it.
 *
 * The default value is "0".
 */
#define SDL_HINT_BMP_SAVE_LEGACY_FORMAT "SDL_BMP_SAVE_LEGACY_FORMAT"



/**
 * \brief Tell the video driver that we only want a double buffer.
 *
 * By default, most lowlevel 2D APIs will use a triple buffer scheme that
 * wastes no CPU time on waiting for vsync after issuing a flip, but
 * introduces a frame of latency. On the other hand, using a double buffer
 * scheme instead is recommended for cases where low latency is an important
 * factor because we save a whole frame of latency.
 * We do so by waiting for vsync immediately after issuing a flip, usually just
 * after eglSwapBuffers call in the backend's *_SwapWindow function.
 *
 * Since it's driver-specific, it's only supported where possible and
 * implemented. Currently supported the following drivers:
 * - KMSDRM (kmsdrm)
 * - Raspberry Pi (raspberrypi)
 */
#define SDL_HINT_VIDEO_DOUBLE_BUFFER      "SDL_VIDEO_DOUBLE_BUFFER"


/**
 *  \brief  A variable controlling the audio category on iOS and Mac OS X
 *
 *  This variable can be set to the following values:
 *
 *    "ambient"     - Use the AVAudioSessionCategoryAmbient audio category, will be muted by the phone mute switch (default)
 *    "playback"    - Use the AVAudioSessionCategoryPlayback category
 *
 *  For more information, see Apple's documentation:
 *  https://developer.apple.com/library/content/documentation/Audio/Conceptual/AudioSessionProgrammingGuide/AudioSessionCategoriesandModes/AudioSessionCategoriesandModes.html
 */
#define SDL_HINT_AUDIO_CATEGORY   "SDL_AUDIO_CATEGORY"

/**
 *  \brief  A variable controlling whether the 2D render API is compatible or efficient.
 *
 *  This variable can be set to the following values:
 *
 *    "0"     - Don't use batching to make rendering more efficient.
 *    "1"     - Use batching, but might cause problems if app makes its own direct OpenGL calls.
 *
 *  Up to SDL 2.0.9, the render API would draw immediately when requested. Now
 *  it batches up draw requests and sends them all to the GPU only when forced
 *  to (during SDL_RenderPresent, when changing render targets, by updating a
 *  texture that the batch needs, etc). This is significantly more efficient,
 *  but it can cause problems for apps that expect to render on top of the
 *  render API's output. As such, SDL will disable batching if a specific
 *  render backend is requested (since this might indicate that the app is
 *  planning to use the underlying graphics API directly). This hint can
 *  be used to explicitly request batching in this instance. It is a contract
 *  that you will either never use the underlying graphics API directly, or
 *  if you do, you will call SDL_RenderFlush() before you do so any current
 *  batch goes to the GPU before your work begins. Not following this contract
 *  will result in undefined behavior.
 */
#define SDL_HINT_RENDER_BATCHING  "SDL_RENDER_BATCHING"


/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif
#include "/home/estebagel/UE_4.20-unstoppable/Engine/Source/ThirdParty/SDL2/SDL-gui-backend/include/close_code.h"

/* vi: set ts=4 sw=4 expandtab: */



#endif //UE4_ICHU_SDL_HINTS_H
