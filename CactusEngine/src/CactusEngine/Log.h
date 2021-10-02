#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace CE {

	class CE_API Log
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

#define CE_CORE_TRACE(...) ::CE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CE_CORE_INFO(...) ::CE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CE_CORE_WARN(...) ::CE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CE_CORE_ERROR(...) ::CE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CE_CORE_FATAL(...) ::CE::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define CE_TRACE(...) ::CE::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CE_INFO(...) ::CE::Log::GetClientLogger()->info(__VA_ARGS__)
#define CE_WARN(...) ::CE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CE_ERROR(...) ::CE::Log::GetClientLogger()->error(__VA_ARGS__)
#define CE_FATAL(...) ::CE::Log::GetClientLogger()->fatal(__VA_ARGS__)
