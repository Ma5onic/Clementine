#ifndef ENGINE_FWD_H
#define ENGINE_FWD_H

#include <QString>

/// Used by eg engineobserver.h, and thus we reduce header dependencies on enginebase.h

namespace Engine
{
    struct SimpleMetaBundle;
    class Base;

    enum Type {
      Type_GStreamer,
      Type_VLC,
      Type_Xine,
      Type_QtPhonon,
    };

    /**
     * You should return:
     * Playing when playing,
     * Paused when paused
     * Idle when you still have a URL loaded (ie you have not been told to stop())
     * Empty when you have been told to stop(), or an error occurred and you stopped yourself
     *
     * It is vital to be Idle just after the track has ended!
     */
    enum State { Empty, Idle, Playing, Paused };

    enum TrackChangeType { First, Manual, Auto };
}

typedef Engine::Base EngineBase;

#endif
