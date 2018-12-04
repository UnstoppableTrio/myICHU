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

#ifndef SDL_events_c_h_
#define SDL_events_c_h_

#include "../SDL_internal.h"

/* Useful functions and variables from SDL_events.c */
#include "ICHU_SDL_events.h"
#include "/home/estebagel/UE_4.20-unstoppable/Engine/Source/ThirdParty/SDL2/SDL-gui-backend/include/SDL_thread.h"
//#include "/home/estebagel/UE_4.20-unstoppable/Engine/Source/ThirdParty/SDL2/SDL-gui-backend/src/video/SDL_sysvideo.h"

#include "SDL_clipboardevents_c.h"
#include "SDL_displayevents_c.h"
#include "SDL_dropevents_c.h"
#include "SDL_gesture_c.h"
#include "SDL_keyboard_c.h"
#include "SDL_mouse_c.h"
#include "SDL_touch_c.h"
#include "SDL_windowevents_c.h"

/**
 *  \brief General event structure, from SDL_events.h
 */
typedef union SDL_Event {
   Uint32 type;                       /**< Event type, shared with all events */
   SDL_CommonEvent common;            /**< Common event data */
  // SDL_DisplayEvent display;          /**< Window event data */ Add this later 12/04/2018
   SDL_WindowEvent window;            /**< Window event data */
   SDL_KeyboardEvent key;             /**< Keyboard event data */
   SDL_TextEditingEvent edit;         /**< Text editing event data */
   SDL_TextInputEvent text;           /**< Text input event data */
   SDL_MouseMotionEvent motion;       /**< Mouse motion event data */
   SDL_MouseButtonEvent button;       /**< Mouse button event data */
   SDL_MouseWheelEvent wheel;         /**< Mouse wheel event data */
   SDL_JoyAxisEvent jaxis;            /**< Joystick axis event data */
   SDL_JoyBallEvent jball;            /**< Joystick ball event data */
   SDL_JoyHatEvent jhat;              /**< Joystick hat event data */
   SDL_JoyButtonEvent jbutton;        /**< Joystick button event data */
   SDL_JoyDeviceEvent jdevice;        /**< Joystick device change event data */
   SDL_ControllerAxisEvent caxis;     /**< Game Controller axis event data */
   SDL_ControllerButtonEvent cbutton; /**< Game Controller button event data */
   SDL_ControllerDeviceEvent cdevice; /**< Game Controller device event data */
   SDL_AudioDeviceEvent adevice;      /**< Audio device event data */
   SDL_SensorEvent sensor;            /**< Sensor event data */
   SDL_QuitEvent quit;                /**< Quit request event data */
   SDL_UserEvent user;                /**< Custom event data */
   SDL_SysWMEvent syswm;              /**< System dependent window event data */
   SDL_TouchFingerEvent tfinger;      /**< Touch finger event data */
   SDL_MultiGestureEvent mgesture;    /**< Gesture event data */
   SDL_DollarGestureEvent dgesture;   /**< Gesture event data */
   SDL_DropEvent drop;                /**< Drag and drop event data */

   /* This is necessary for ABI compatibility between Visual C++ and GCC
       Visual C++ will respect the push pack pragma and use 52 bytes for
       this structure, and GCC will use the alignment of the largest datatype
       within the union, which is 8 bytes.

       So... we'll add padding to force the size to be 56 bytes for both.
    */
   Uint8 padding[56];
} SDL_Event;

/* Start and stop the event processing loop */
extern int SDL_StartEventLoop(void);
extern void SDL_StopEventLoop(void);
extern void SDL_QuitInterrupt(void);

extern int SDL_SendAppEvent(SDL_EventType eventType);
extern int SDL_SendSysWMEvent(SDL_SysWMmsg *message);
extern int SDL_SendKeymapChangedEvent(void);

extern int SDL_QuitInit(void);
extern int SDL_SendQuit(void);
extern void SDL_QuitQuit(void);

extern void SDL_SendPendingQuit(void);

#endif /* SDL_events_c_h_ */

/* vi: set ts=4 sw=4 expandtab: */