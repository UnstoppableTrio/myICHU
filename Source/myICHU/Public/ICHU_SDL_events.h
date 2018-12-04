//This file added by bagel, redirects to SDL_events and adds missing fucntions.

#include "/home/estebagel/UE_4.20-unstoppable/Engine/Source/ThirdParty/SDL2/SDL-gui-backend/include/SDL_events.h"

#include "/home/estebagel/UE_4.20-unstoppable/Engine/Source/ThirdParty/SDL2/SDL-gui-backend/include/begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C"
{
#endif

    /**
 * \brief The types of events that can be delivered. The extra functions from the newer version of SDL_events.h
 */
//    typedef enum
  //  {
  //      SDL_FIRSTEVENT = 0, /**< Unused (do not remove) */

        /* Display events */
    //    SDL_DISPLAYEVENT = 0x150, /**< Display state change */

        /* Sensor events */
      //  SDL_SENSORUPDATE = 0x1200, /**< A sensor was updated */

        /**
     *  This last event is only for bounding internal arrays
     */
        //SDL_LASTEVENT = 0xFFFF
   // } SDL_EventType;

    /**
 *  \brief Display state change event data (event.display.*)
 */
  //  typedef struct SDL_DisplayEvent
    //{
      //  Uint32 type;      /**< ::SDL_DISPLAYEVENT */
      //  Uint32 timestamp; /**< In milliseconds, populated using SDL_GetTicks() */
      //  Uint32 display;   /**< The associated display index */
      //  Uint8 event;      /**< ::SDL_DisplayEventID */
      //  Uint8 padding1;
      //  Uint8 padding2;
      //  Uint8 padding3;
      //  Sint32 data1; /**< event dependent data */
    //} SDL_DisplayEvent;

    /**
 *  \brief Sensor event structure (event.sensor.*)
 */
  //  typedef struct SDL_SensorEvent
 //   {
  //      Uint32 type;      /**< ::SDL_SENSORUPDATE */
 //       Uint32 timestamp; /**< In milliseconds, populated using SDL_GetTicks() */
 //       Sint32 which;     /**< The instance ID of the sensor */
 //       float data[6];    /**< Up to 6 values from the sensor - additional values can be queried using SDL_SensorGetData() */
  //  } SDL_SensorEvent;

/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif
#include "/home/estebagel/UE_4.20-unstoppable/Engine/Source/ThirdParty/SDL2/SDL-gui-backend/include/close_code.h"

/* vi: set ts=4 sw=4 expandtab: */