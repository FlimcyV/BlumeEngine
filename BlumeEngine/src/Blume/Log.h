#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Blume {

	class BLUME_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core logging macros
#define BE_CORE_TRACE(...)   ::Blume::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BE_CORE_INFO(...)    ::Blume::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BE_CORE_WARN(...)    ::Blume::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BE_CORE_ERROR(...)   ::Blume::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BE_CORE_FATAL(...)   ::Blume::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logging macros
#define BE_TRACE(...)   ::Blume::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BE_INFO(...)    ::Blume::Log::GetClientLogger()->info(__VA_ARGS__)
#define BE_WARN(...)    ::Blume::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BE_ERROR(...)   ::Blume::Log::GetClientLogger()->error(__VA_ARGS__)
#define BE_FATAL(...)   ::Blume::Log::GetClientLogger()->fatal(__VA_ARGS__)