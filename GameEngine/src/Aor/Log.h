#pragma once

#include <memory.h>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Aor {

	class AOR_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private :
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Log macros
#define AOR_CORE_TRACE(...)		::Aor::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AOR_CORE_INFO(...)		::Aor::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AOR_CORE_WARN(...)		::Aor::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AOR_CORE_ERROR(...)		::Aor::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AOR_CORE_FATAL(...)		::Aor::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log macros
#define AOR_TRACE(...)		::Aor::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AOR_INFO(...)		::Aor::Log::GetClientLogger()->info(__VA_ARGS__)
#define AOR_WARN(...)		::Aor::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AOR_ERROR(...)		::Aor::Log::GetClientLogger()->error(__VA_ARGS__)
#define AOR_FATAL(...)		::Aor::Log::GetClientLogger()->fatal(__VA_ARGS__)