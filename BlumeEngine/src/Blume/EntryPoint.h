#pragma once

#ifdef BE_PLATFORM_WINDOWS

extern Blume::Application* Blume::CreateApplication();

int main(int argc, char** argv)
{
    Blume::Log::Init();
    BE_CORE_WARN("Initialized Log!");
    int a = 5;
    BE_INFO("Hi! Var={0}", a);

    auto app = Blume::CreateApplication();
    app->Run();
    delete app;
}

#endif
