using namespace std;

#ifndef VIDEOPLAYBACK_H
#define VIDEOPLAYBACK_H

#include "ZLauncher.h"

class VideoPlayback
{
    public:
        static void start();

        static void playVideo(string video);
};

#endif // VIDEOPLAYBACK_H
