#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Cactus
{
	class CACTUS_API Log
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

// Core log macros
#define CACTUS_CORE_TRACE(...) ::Cactus::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CACTUS_CORE_INFO(...) ::Cactus::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CACTUS_CORE_WARN(...) ::Cactus::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CACTUS_CORE_ERROR(...) ::Cactus::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CACTUS_CORE_FATAL(...) ::Cactus::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define CACTUS_TRACE(...) ::Cactus::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CACTUS_INFO(...) ::Cactus::Log::GetClientLogger()->info(__VA_ARGS__)
#define CACTUS_WARN(...) ::Cactus::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CACTUS_ERROR(...) ::Cactus::Log::GetClientLogger()->error(__VA_ARGS__)
#define CACTUS_FATAL(...) ::Cactus::Log::GetClientLogger()->fatal(__VA_ARGS__)
