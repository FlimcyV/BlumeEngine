#pragma once

#include "Core.h"

namespace Blume {

    class BLUME_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // define in client
    Application* CreateApplication();

}
